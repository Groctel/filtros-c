BIN  = bin
INC  = includes
SRC  = src
OBJ  = obj

CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c --std=c++11

all: player

bin:
	@mkdir -p bin obj

practica1-S3: filtermanager home player main.o

main.o:

player: $(SRC)/Player.cpp $(INC)/Player.h $(INC)/FilterManager.h $(INC)/Home.h
	$(CXX) $(CPPFLAGS) $(SRC)/Player.cpp -o $(OBJ)/Player.o


filters: filter fatfilter keyfilter

filter: $(SRC)/Filter.cpp $(INC)/Filter.h
	$(CXX) $(CPPFLAGS) $(SRC)/Filter.cpp -o $(OBJ)/Filter.o

filterchain:

home: