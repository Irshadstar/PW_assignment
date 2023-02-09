#include<iostream>
using namespace std;

int main(){
  // answer 1
  int num1,num2;
  cout<<"Enter first number:";       // First number.
  cin>>num1;
  cout<<"Enter second number:";       // Second number.
  cin>>num2;
  bool result1 = num1==num2? true: false;
  cout<<result1<<endl;

  // answer 2.
  int a,b;
  cout<<"Enter first  number:";          // First number
  cin>>a;
  cout<<"Enter second number:";             // Second number
  cin>>b;
  bool result2 = a<50 && a<b ? true : false;
  cout<<result2<<endl;

  // answer 3.
  int total, boys, girls;
  boys = 17;
  total = (80*45)/100;
  girls = total - boys;
  cout<<"Number of girls who gets grade A :"<<girls<<endl;

  // answer 4.
  int n, first, second, third, fourth, fifth, sum;
  n=12345;
  first = n/10000;               // First digit.
  n = n%10000;
  second = n/1000;                // Second digit.
  n = n%1000;
  third = n/100;                 // Third digit.
  n = n%100;
  fourth = n/10;                  // Fourth digit.
  fifth = n%10;                  // Fifth digit.
  sum = first + fourth;
  cout<<"Sum of first and second last digit of number:"<<sum<<endl;

  // answer 5
  int number, first_digit, second_digit, third_digit, sum;
  number = 123;
  first_digit = number/100;                 // First digit.
  number = number%100;                      
  second_digit = number/10;                 // Second digit. 
  third_digit = number%10;                  // Third digit. 
  sum = first_digit + second_digit + third_digit;
  cout<<"Sum of digit of three digit number:"<<sum<<endl;

  // answer 6.
  int number1, number2;
  cin>>number1;
  cin>>number2;
  int Sum = number1 + number2;                   // Sum
  int difference = number1 - number2;            // Difference.
  int product = number1 * number2;                // Product.
  int divisiohn = number1/number2;               // Division.
  cout<<"Sum of two number:"<<Sum<<endl;
  cout<<"Difference of two number:"<<difference<<endl;
  cout<<"Product of two number:"<<product<<endl;
  cout<<"division of two number:"<<divisiohn<<endl;

  // The end.


  

  return 0;
}