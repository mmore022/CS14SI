week1: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week1/ILtemplate.cpp -o bin/week1
week2: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week2/main.cpp -o bin/week2
week3: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week3/Week3.cpp -o bin/week3
week4: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week4/main.cpp -o bin/week4
clean:
	rm -fvr bin/
	