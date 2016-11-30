OBJS=main.o tool1.o tool2.o
CFLAGS+=-Wall -g -c
LDFLAGS+=-lm
CC=gcc

all:mytool

mytool:$(OBJS)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r *.o mytool



