CC = gcc
CFLAGS = -Wall -Werror -g
TARGET = calculator
TEST_TARGET = test_calculator

SRC_DIR = src
TEST_DIR = tests
SRC_FILES = $(SRC_DIR)/calculator.c $(SRC_DIR)/main.c
TEST_FILES = $(SRC_DIR)/calculator.c $(TEST_DIR)/test_calculator.c

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_FILES)

test: $(TEST_FILES)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_FILES)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

.PHONY: all test clean

