CC = clang
CFLAGS = -Wall -std=c2x
BUILD_DIR = build
TARGET = $(BUILD_DIR)/main
SRC = src/main.c

.PHONY: all run clean

all: $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(BUILD_DIR) $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: all
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR)
