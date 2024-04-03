FLAGS = -Werror

main.exe: main.o
	g++ -o main.exe main.o 

main.o: database.h main.cpp
	g++ ${FLAGS} -c main.cpp

clean:
	rm *.o
	rm main