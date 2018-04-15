lab1: main.o poloj.o
	g++ main.o poloj.o -o lab1

main.o: main.cpp
	g++ -c main.cpp

poloj.o: poloj.cpp
	g++ -c poloj.cpp

clean:
	rm -rf *.o lab1
