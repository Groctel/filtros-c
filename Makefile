MAKEDIR = .
BIN     = $(MAKEDIR)/bin
INC     = $(MAKEDIR)/includes
SRC     = $(MAKEDIR)/src
OBJ     = $(MAKEDIR)/obj

CXX      = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -Wfloat-equal -g -I$(INC) --std=c++17

.PHONY: all dir

all: \
	dir \
	$(BIN)/filtro

dir:
	@mkdir -p $(BIN)
	@mkdir -p $(OBJ)

$(BIN)/filtro: $(SRC)/main.cpp \
		$(OBJ)/FatFilter.o \
		$(OBJ)/Filter.o \
		$(OBJ)/FilterChain.o \
		$(OBJ)/FilterManager.o \
		$(OBJ)/Home.o \
		$(OBJ)/KeyFilter.o \
		$(OBJ)/Player.o
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ)/FatFilter.o: $(SRC)/FatFilter.cpp $(INC)/FatFilter.h \
		$(OBJ)/Filter.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ)/Filter.o: $(SRC)/Filter.cpp $(INC)/Filter.h \
		$(OBJ)/Player.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ)/FilterChain.o: $(SRC)/FilterChain.cpp $(INC)/FilterChain.h \
		$(OBJ)/FatFilter.o \
		$(OBJ)/Home.o \
		$(OBJ)/KeyFilter.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ)/FilterManager.o: $(SRC)/FilterManager.cpp $(INC)/FilterManager.h \
		$(OBJ)/FilterChain.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ)/Home.o: $(SRC)/Home.cpp $(INC)/Home.h \
		$(OBJ)/Player.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ)/KeyFilter.o: $(SRC)/KeyFilter.cpp $(INC)/KeyFilter.h \
		$(OBJ)/Filter.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ)/Player.o: $(SRC)/Player.cpp $(INC)/Player.h
	$(CXX) $(CXXFLAGS) -c $< -o $@
