objects = convert.o main.o libcalculate.so
CXX= g++

build : $(objects)
	$(CXX) -o build $(objects) -L. -lcalculate 

# main: libshared.so main.o
#     $(CXX) -o main  main.o -L. -lshared

libcalculate.so: calculate.cpp
	$(CXX) -fPIC -c calculate.cpp -o calculate.o
	$(CXX) -shared  -Wl,-soname,libcalculate.so -o libcalculate.so calculate.o

clean:
	$rm *.o *.so