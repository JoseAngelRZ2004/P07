CC = g++
CFLAGS = -Wall -std=c++14

all: P61061-products-of-digits

P61061-products-of-digits: P61061-products-of-digits.o

%.o : %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	rm -f *.o *~ P61061-products-of-digits
