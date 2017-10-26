#ifndef STYLE_H
#define STYLE_H

#include<string>
using namespace std;

class Style{
  public:
     Style(int val): value(val){}
      static const int light = 0;
      static const int normal = 1;
      static const int extra = 2;
      static const int drenched = 3;

      string to_string() {
       switch(value) {
         case(light):return "light";
         case(normal):return "normal";
         case(extra):return "extra";
         case(drenched):return "drenched";
         default: return "UNKNOWN";
       }
     }
   private:
     int value;

};
#endif
