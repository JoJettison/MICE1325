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
