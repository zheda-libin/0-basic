CC = g++
CFLAGS = -std=c++11 -o
SRC_FILE = $(wildcard *.cpp)
EXECUTABLE = main

$(EXECUTABLE):
	$(CC) $(CFLAGS) $@ $(SRC_FILE)
	@echo "Executable file: " $@
clean:
	rm -rf $(EXECUTABLE)
