CXX=g++
CXXFLAGS=-g -Wall -std=c++11
#CXXINCLUDES = 
#CXXDEFINES =
CXXSRCS=$(wildcard *.cpp)
CXXNAME=$(CXXSRCS:.cpp=)
CXXOBJ=$(CXXSRC:.cpp=.o)

.PHONY: all clean $(CXXNAME)

all: $(CXXNAME)

$(CXXNAME):
	$(CXX) $(CXXFLAGS) $@.cpp -o $@
 
clean:
	rm -fr $(CXXNAME)

#	$(CXX) $(CXXFLAGS) $<.cpp $(CXXNAME)

#%.o: %.cpp
#	$(CXX) $(CXXFLAGS) $< 

#	$(CXX) $(CXXFLAGS) $(CXXINCLUDES) $(CXXDEFINES) -c $< -o $@
#	$(CXX) $(CXXFLAGS) -c $< -o $@

#
# g++ -c argument is making .o file, so linking is not done
# 

