CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=power.o basicMath.o 
FLAGS= -Wall -g

all: mymathd mymaths mains maind	
mains:  $(OBJECTS_MAIN) libmyMath.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind:  $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymathd: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o
mymaths: power.o basicMath.o
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -fPIC -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -fPIC -c basicMath.c
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
