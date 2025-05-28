CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

all: inversion_queries

inversion_queries: inversion_queries.cpp
	$(CXX) $(CXXFLAGS) -o inversion_queries inversion_queries.cpp

clean:
	rm -f inversion_queries 