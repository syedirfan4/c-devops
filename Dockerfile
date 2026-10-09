FROM gcc:14 AS build
WORKDIR /src
COPY . .
RUN make test && make calc LDFLAGS=-static

FROM scratch
COPY --from=build /src/calc /calc
ENTRYPOINT ["/calc"]
