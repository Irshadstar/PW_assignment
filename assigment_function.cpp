#include<iostream>
#include<cmath>
using namespace std;

    // function answer 1
    int sq(int n){
        return n*n;
    }

    // function  answer 2.
    float circumferance( int r){
        return 2*3.14159*r;
    }
    float circle_area( int r ){
        return 3.14159*r*r;
    }

    // function  answer 3.
    void vote_eligible( int age ){
        if(age>18){
            cout<<"HE/SHE is eligible for vote:"<<endl;
        } else {
            cout<<"HE/SHE is not eligible for vote:"<<endl;
        }
    }

    // function  answer 4.
    void odd_numbers( int a, int b){
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }cout<<endl;
    }

    // function  answer 5.
    bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main(){

    // answer 1.
    int n;
    cin>>n;
    cout<<sq(n)<<endl;

    // answer 2.
    int r;
    cin>>r;
    cout<<circumferance(r)<<endl;
    cout<<circle_area(r)<<endl;

    // answer 3.
    int age;
    cin>>age;
    vote_eligible(age);    
    cout<<endl;

    // answer 4.
    int a,b;
    cin>>a>>b;
    odd_numbers(a, b);

    // answer 5.
     int num1, num2;
    cout << "Enter the range (a and b): ";
    cin >> num1 >> num2;

    cout << "Prime numbers between " << a << " and " << b << " are: ";
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;


    return 0;
}