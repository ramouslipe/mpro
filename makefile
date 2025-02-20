all: main

CXX = g++
override CXXFLAGS += -g -Wall -Werror -std=c++14

SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print | sed -e 's/ /\\ /g')
HEADERS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o "$@"

main-debug: $(SRCS) $(HEADERS)
	NIX_HARDENING_ENABLE= $(CXX) $(CXXFLAGS) -O0  $(SRCS) -o "$@"

clean:
	rm -f main main-debug