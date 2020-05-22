
EXEC = run
CC = g++
CFLAGS = -c

# $(EXEC) has the value of shell variable EXEC, which is run.
# # run depends on the files main.o util.o heap.o
$(EXEC) :main.o heap.o
# run is created by the command g++ -o run main.o
# note that the TAB before $(CC) is REQUIRED...
	$(CC) -o $(EXEC) main.o heap.o

# main.o depends on the files main.h main.cpp
main.o: main.cpp
# main.o is created by the command g++ -c -Wall main.cpp
# note that the TAB before $(CC) is REQUIRED...
	$(CC) $(CFLAGS) main.cpp

heap.o  :heap.h heap.cpp
	$(CC) $(CFLAGS) heap.cpp

clean:
	rm *.o
	rm run
