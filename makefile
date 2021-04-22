CC = g++   # use g++ compiler

FLAGS = -std=c++17  # compile with C++ 17 standard
CFLAGS += -Wall      # compile with all warnings
CFLAGS += -I .     # compile with inc directory appended to path

# exe
TARGET = assign5

all: $(TARGET)

$(TARGET) : main.cpp main.h
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean:
	$(RM) $(TARGET)
