
main: test.o Dish.o
	g++ test.o Dish.o -o main

test.o: test.cpp
	g++ -c test.cpp

Dish.o: Dish.cpp Dish.hpp
	g++ -c Dish.cpp

clean:
	rm *.o main



