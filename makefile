hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/Ball.o -c ./src/Ball.cpp
	g++ -I ./include/ -o ./lib/BallManager.o -c ./src/BallManager.cpp
	g++ -I ./include/ -o ./lib/Screen.o -c ./src/Screen.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/*.o ./src/Test.cpp
calistir:
	./bin/Test