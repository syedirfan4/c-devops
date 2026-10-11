CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -O2
LDFLAGS =

calc: src/main.c src/mathutil.c src/mathutil.h
	$(CC) $(CFLAGS) -o $@ src/main.c src/mathutil.c $(LDFLAGS)

test: tests/test_mathutil.c src/mathutil.c src/mathutil.h
	$(CC) $(CFLAGS) -o test_runner tests/test_mathutil.c src/mathutil.c
	./test_runner

clean:
	rm -f calc test_runner

.PHONY: test clean

sanitize: tests/test_mathutil.c src/mathutil.c src/mathutil.h
	$(CC) $(CFLAGS) -g -fsanitize=address,undefined -fno-omit-frame-pointer -o test_sanitize tests/test_mathutil.c src/mathutil.c
	./test_sanitize

.PHONY: sanitize
