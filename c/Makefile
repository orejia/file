
CC=gcc
CFLAGS=-g -Wall
INCLUDE_PATH=/usr/include
LIB_PATH=/usr/lib/

EXAMPLE_BINARIES=example_02

all: examples

examples: $(EXAMPLE_BINARIES)

example_01_module=example_01.o file_operate.o
example_01: $(example_01_module)
	$(CC) $(CFLAGS) $^ -o $@ -L $(LIB_PATH) -Wl,-rpath $(LIB_PATH)

example_02_module=example_02.o file_operate.o g_time.o
example_02: $(example_02_module)
	$(CC) $(CFLAGS) $^ -o $@ -L $(LIB_PATH) -Wl,-rpath $(LIB_PATH)

.c.o:
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE_PATH)

clean:
	rm -f *~
	rm -f *.o
	rm -f $(EXAMPLE_BINARIES)
