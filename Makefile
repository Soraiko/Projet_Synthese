IDIR = include
ODIR = obj
SDIR = src

CC = gcc
CFLAGS= -Wall -I$(IDIR)


_DEPS = rational.h geometry.h list.h tree.h algo.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = rational.o geometry.o list.o tree.o algo.o test.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

test: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
