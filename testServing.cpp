#include<vector>
#include<iostream>
#include "serving.h"
#include "container.h"
#include "scoop.h"
#include "toppings.h"

using namespace std;

int main(){

Container medBowl("Medium Bowl"," An average sized bowl that can hold 4 scoops",20,10,4 );
Scoop choco("Chocolate", "The original.",12,6);
Scoop vanilla("Vanilla", "White and creamy.",12,3);
Toppings sprink("Sprinkles", "Really sugary",9,3,1);
medBowl.restock();
choco.restock();
sprink.restock();
vector<Scoop>allScoops;
vector<Toppings>allToppings;
allScoops.push_back(vanilla);
allScoops.push_back(choco);

allToppings.push_back(sprink);
//Creating a serving

Serving first(medBowl,allScoops,allToppings);

cout<<first.price()<<endl;


}
