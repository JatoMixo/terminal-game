.PHONY: build
build:
	gcc -o bin/main -g main.c

.PHONY: debug
debug:
	gcc -o bin/main -g main.c
	gdb -q bin/main

.PHONY: release
release:
	gcc -O3 -o bin/main main.c

.PHONY: run
run:
	gcc -o bin/main main.c
	./bin/main

