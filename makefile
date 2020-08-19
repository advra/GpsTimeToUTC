CXX = g++ 
# INCLUDES = -I /include
CPPFLAGS = -Wall 
SOURCES = main.cpp

all: gpstime 

clean:
	rm -f gpstime
	rm -f main.o
	rm -f tz.o

gpstime: main.o tz.o
	$(CXX) -o gpstime main.o tz.o -L -lvncxx -lpthread -lcurl

main.o: main.cpp
	$(CXX) $(CPPFLAGS) $(INCLUDES) -c $< -o $@

tz.o: tz.cpp
	$(CXX) $(CPPFLAGS) $(INCLUDES) -c $< -o $@