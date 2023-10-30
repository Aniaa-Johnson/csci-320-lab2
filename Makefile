CC = gcc
CFLAGS = -Wall -Werror

SRCS = lab1.c
OBJS = $(SRCS:.c=.o)

TARGET = explode

APPNAME = Lab2
SICDIR = /home/aniaa

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)