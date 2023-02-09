#include<iostream>
using namespace std;

int main(){
  // answer 1
  int length, breadth;
  cout<<"Enter length:";             
  cin>>length;                              // Taking length from user.
  cout<<"Enter breadth:";
  cin>>breadth;                             // Taking breadth from user.
  if( length == breadth ){
    cout<<"It is a square."<<endl;
  } else {
    cout<<"It is not a square."<<endl;
  }

  // answer 2.
  int n;
  cout<<"Enter a number:";
  cin>>n;                                   // Taking number from user.
  if(n<0){
    n=n*(-1);
  }
  cout<<"Absolute value is"<<n<<endl;

  // answer 3.
  int cost_price, selling_price;
  cout<<"Enter cost price:";
  cin>>cost_price;                                    // Taking cost price from user.
  cout<<"Enter selling price:";
  cin>>selling_price;                                 // Taking selling price from user.
  if(selling_price>cost_price){
    cout<<"Profit:"<<selling_price-cost_price<<endl;
  } else {
    cout<<"Lose:"<<cost_price-selling_price<<endl;
  }

  // answer 4.
  int number;
  cin>>number;                   // Taking number from user.
  if( number >= 0){
    cout<<"It is a positive number."<<number<<endl;
  } else {
    cout<<"It is a negative number."<<endl;
  }

  //answer 5.
  int num1, num2;
  cout<<"Enter first  number:";
  cin>>num1;                                     // Taking bfirst number from user.
  cout<<"Enter second number:";
  cin>>num2;                                    // taking second number from user.
  char operate;
  cout<<"Enter oeration (+,-,*,/)";
  cin>>operate;                                 // Taking operators from user.
  switch (operate){
    case '+':
    cout<<"Sum of two number:"<<num1+num2<<endl;
    break;
    case '-':
    cout<<"Difference of two number:"<<num1-num2<<endl;
    break;
    case '*':
    cout<<"Product of two number:"<<num1*num2<<endl;
    break;
    case '/':
    cout<<"Division of two number:"<<num1/num2<<endl;
    default:
    cout<<"It is invalid operator:"<<endl;
  }
  
  // answer 6.
  int marks;
  cout<<"Enter your marks:";
  cin>>marks;                                                // Taking marks from user.
  if(marks>=90){
    cout<<"Your grade is A+:"<<endl;
  }
  else if(marks>=80){
    cout<<"Your grade is A:"<<endl;
  }
  else if(marks>=70){
    cout<<"Your grade is b+:"<<endl;
  }
  else if(marks>=60){
    cout<<"Your grade is B:"<<endl;
  }
  else if(marks>=50){
    cout<<"Your grade is C:"<<endl;
  }
  else if(marks>=40){
    cout<<"Your grade is D:"<<endl;
  }
  else if(marks>=30){
    cout<<"Your grade is E:"<<endl;
  }
  else 
  cout<<"Your grade is F:"<<endl;

  return 0;
}