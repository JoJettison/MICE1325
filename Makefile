CXXFLAGS = --std=c++11

all:main_window

debug: CXXFLAGS += -g
debug: main_window

main_window: main.o main_window.o container.o scoop.o toppings.o manager.o controller.o
	$(CXX) $(CXXFLAGS) -o mice main.o main_window.o container.o scoop.o toppings.o manager.o controller.o `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
	./mice
main.o: main.cpp main_window.h
	$(CXX) $(CXXFLAGS) -c main.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
main_window.o: main_window.cpp main_window.h
	$(CXX) $(CXXFLAGS) -c main_window.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
container.o: container.cpp container.h
	$(CXX) $(CXXFLAGS) -c container.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
manager.o: manager.cpp manager.h
	$(CXX) $(CXXFLAGS) -c manager.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
controller.o: controller.cpp controller.h
		$(CXX) $(CXXFLAGS) -c controller.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
scoop.o: scoop.cpp scoop.h
	$(CXX) $(CXXFLAGS) -c scoop.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
toppings.o: toppings.cpp toppings.h *.h
	$(CXX) $(CXXFLAGS) -c toppings.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
item.o: item.cpp item.h
	$(CXX) $(CXXFLAGS) -c item.cpp
testItem.o: testItem.cpp item.h
	$(CXX) $(CXXFLAGS) -c -w testItem.cpp
testItem: testItem.o item.o
	$(CXX) $(CXXFLAGS) -o testItem testItem.o item.o
scoop.o: scoop.cpp scoop.h item.h
	$(CXX) $(CXXFLAGS) -c scoop.cpp
testScoop.o: testScoop.cpp scoop.h item.h
	$(CXX) $(CXXFLAGS) -c -w testScoop.cpp
testScoop: testScoop.o scoop.o item.o
	$(CXX) $(CXXFLAGS) -o testScoop testScoop.o scoop.o item.o
toppings.o: toppings.cpp toppings.h
	$(CXX) $(CXXFLAGS) -c toppings.cpp
testToppings.o: testToppings.cpp toppings.h
	$(CXX) $(CXXFLAGS) -c -w testToppings.cpp
testToppings: testToppings.o toppings.o
	$(CXX) $(CXXFLAGS) -o testToppings testToppings.o toppings.o
clean:
	-rm -f *.o testItem testScoop
