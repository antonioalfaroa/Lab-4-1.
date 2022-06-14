#include <iostream>

using namespace std;

class Time{
public:
Time();
//void ~Time(int); This statement is not okay, a destructor should have a void before it and it cant call a value inside it.
~Time();
};

class Employee{
public:

//int Employee(string, string); This statement is incorrect because a constructor cant return a value.

Employee(string, string);
};

class Example{
  public:
    Example( int y = 10 ): data( y ){
    // empty body
    } // end Example constructor
    int getIncrementedData() const{
      //return ++data; This statement is not okay, an increment is wrote as x++, not as ++x and the value cant be incremented because it is a constant.
      return data;
    } // end function getIncrementedData
    static int getCount(){
      int data = 0; //inside a static funciton each variable has to be initialized before using it.
      cout << "Data is " << data << endl;
      return count;
    } // end function getCount
  private:
    int data;
    static int count;
}; // end class Example



