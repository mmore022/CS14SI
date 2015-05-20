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
week5: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week5/main.cc -o bin/week5
	cp src/Week5/words.txt bin/
week6A: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week6/main.cc -o bin/week6A
week6H: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week6/main2.cc -o bin/week6H
week7: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week7/main.cc -o bin/week7
week8: clean
	mkdir bin
	g++ -std=c++11 -Wall -Werror -pedantic src/Week8/main.cc -o bin/week8
	bin/./week8
clean:
	rm -fvr bin/
	