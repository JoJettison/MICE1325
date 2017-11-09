#ifndef SERVER_H
#define SERVER_H
#include "person.h"
#include <string>

using namespace std;

class Server :public Person
{
  public:
    Server(string Name, int IDcode, string phoneNum);
    int ordersFilled();
    double currentSal();
    int fill();
    void replenishSup();
    string pType() override;


  private:
    int orders;
    double salary;
};
#endif
