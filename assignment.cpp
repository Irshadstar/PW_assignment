#include<iostream>
using namespace std;

int main(){
    // answer 1.
int x= 10;     // first number.
  int y=20;    // second number.
  cout<<"product of two number:"<<x*y<<endl;

  // answer 2.

  cout<<"ASCII value of u is "<<(int)'U'<<endl;

  // answer 3.
  int len=5;       // lenght of rectangle.
  int breadth=3;    // breadth of rectangle.
  cout<<"area of rectangle:"<<len*breadth<<endl;     //area of the rectangle.

  // answer 4
  int a= 5;    // number to be cubed.
  cout<<"cube of a number:"<<a*a*a<<endl;

  // answer 5.
  char character = a;   // character datatype.
  cout<<"size of character datatype:"<<sizeof(character)<<endl;
  
  short shortype = 3;      // short datatype.
  cout<<"size of short datatype:"<<sizeof(shortype)<<endl;

    int integer=10;           // integer datatype.
  cout<<"size of integer datatype:"<<sizeof(integer)<<endl;

  long longtype = 394;       // long datatype.
  cout<<"size of long datatype:"<<sizeof(longtype)<<endl;

  float floatype = 4.34;          // float datatype.
  cout<<"size of float datatype:"<<sizeof(floatype)<<endl;

  double doubletype = 545.48585;      // double float datatype.
  cout<<"size of double float datatype:"<<sizeof(doubletype)<<endl;
  
  bool boolean = true;     // boolean datatype.
  cout<<"size of boolean datatype:"<<sizeof(boolean)<<endl;         // the end.

    return 0;
}