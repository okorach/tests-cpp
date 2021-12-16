// DateClass.cc
// Program to demonstrate the definition of a simple class
// and member functions

// Declaration of Date class
class Date {

public:
  Date(int, int, int);
  void print();

private:
  void set(int, int, int);
  int year;
  int month;
  int day;
};


