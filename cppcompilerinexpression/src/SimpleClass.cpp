// DateClass.cc
// Program to demonstrate the definition of a simple class
// and member functions

#include <iostream>
using namespace std;


// Declaration of Date class
class Date {

public:
  Date(int, int, int);
  void set(int, int, int);
  void print();

private:
  int year;
  int month;
  int day;
};


// Date constructor function definition
Date::Date(int d, int m, int y)
{
  if(d>0 && d<31) day = d;
  if(m>0 && m<13) month = m;
  if(y>0) year =y;
}

// Date member function definitions
void Date::set(int d, int m, int y)
{
  if(d>0) {
    if (d<31){
      if(m>0) {
        if (m<13) {
          if(y>0) {
            year =y;
            month = m;
            day = d;
          }
        }
      }
    }
  }
}

void Date::print()
{
  cout << day << "-" << month << "-" << year << endl;
}

