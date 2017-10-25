CXXFLAGS += --std=c++11

item.o: item.cpp item.h
	$(CXX) $(CXXFLAGS) -c item.cpp
testItem.o: testItem.cpp item.h
	$(CXX) $(CXXFLAGS) -c -w testItem.cpp
testItem: testItem.o item.o
	$(CXX) $(CXXFLAGS) -o testItem testItem.o item.o
scoop.o: scoop.cpp scoop.h
	$(CXX) $(CXXFLAGS) -c scoop.cpp
testScoop.o: testScoop.cpp scoop.h
	$(CXX) $(CXXFLAGS) -c -w testScoop.cpp
testScoop: testScoop.o scoop.o
	$(CXX) $(CXXFLAGS) -o testScoop testScoop.o scoop.o
toppings.o: toppings.cpp toppings.h
	$(CXX) $(CXXFLAGS) -c toppings.cpp
testToppings.o: testToppings.cpp toppings.h
	$(CXX) $(CXXFLAGS) -c -w testToppings.cpp
testToppings: testToppings.o toppings.o
	$(CXX) $(CXXFLAGS) -o testToppings testToppings.o toppings.o
clean:
	-rm -f *.o testItem testScoop
