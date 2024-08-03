SRC = main.c gameLoop.c terminalDimensions.c
TARGET_BIN = bin/main

debug_build: $(SRC)
	gcc -o $(TARGET_BIN) -g $(SRC) 

debug: debug_build $(SRC) 
	gdb -q $(TARGET_BIN)

release: $(SRC) 
	gcc -O3 -o $(TARGET_BIN) $(SRC)

run: debug_build $(SRC) 
	$(TARGET_BIN)

