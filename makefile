
CXXFLAGS += -std=c++11 -Wall -Wextra -Werror -pedantic -I.


all: wordscanner


main: wordscanner.cc 
	g++ $(CXXFLAGS) -o wordscanner wordscanner.cc 


clean:
	rm -f wordscanner

.PHONY: all clean
