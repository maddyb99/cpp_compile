CXX = g++
CXXFLAGS = -g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread
INCS = -I./ -I../ -I/opt/gtest/include -I../Calculate -I../Convert
OBJS = ../Convert/convert.o ./convert/convert.o ../Calculate/calculate.o ./calculate/add.o

testAll: $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) -o testAll  main_test.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm testAll *.o testAll.xml