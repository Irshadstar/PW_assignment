#include<iostream>
#include<cmath>
using namespace std;
  // answer 9 function
  bool isPrime(int n) {
    if(n < 2) {
        return false;
    }
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

bool checkSumOfTwoPrimes(int n) {
    for(int i=2; i<=n/2; i++) {
        if(isPrime(i) && isPrime(n-i)) {
            return true;
        }
    }
    return false;
}

int main(){
  // answer 1
  int number;
  cout << "Enter number" << "\n";
  cin >> number;
  int fact = 1;
  for (int j=1;j<=number;j++){
  fact = fact*j;

  }
  cout << "Factorial is:" <<fact << "\n";

// answer 2
  cout<<"Armstrong numbers in the range of 100 to 500 are :"<<endl;
  for(int i=0;i<500;i++){
  int sum = 0;
  int t = i;
  while(t!=0){
    sum = sum+((t%10)*(t%10)*(t%10));
      t = t/10;
  } 
  if(sum == i){
    cout << i <<"\n";
  }
  }

// answer 3
  int n_natural;
  cout<<"Enter natural nimber:";
  cin>>n_natural;
  int sum=0;
  for(int i=1;i<=n_natural;i++){
    sum+=i;
  }
  cout<<"Sum of N natural:"<<sum<<endl;

// answer 4
  int n,t,r,rev=0;
  cout<<"Enter any number : ";
  cin>>n;
  t=n;
  while(t>0){
    r=t%10;
    t=t/10;
    rev=rev*10+r;
  }
  cout<<"Reverse of number "<<n<<" is "<<rev;

// answer 5.
 int size;
    cout << "Enter the size of the cross star: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i == size - 1 - j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

  // answer 6.
  int main() {
    int n;
    cout << "Enter the number of lines for the diamond pattern: ";
    cin >> n;

    // print the upper half of the diamond pattern
    for(int i=0; i<n; i++) {
        // print the spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        // print the letters in ascending order
        for(int k=0; k<i+1; k++) {
            cout << char('A' + k);
        }
        // print the letters in descending order
        for(int l=i-1; l>=0; l--) {
            cout << char('A' + l);
        }
        cout << endl;
    }

    // print the lower half of the diamond pattern
    for(int i=n-2; i>=0; i--) {
        // print the spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        // print the letters in ascending order
        for(int k=0; k<i+1; k++) {
            cout << char('A' + k);
        }
        // print the letters in descending order
        for(int l=i-1; l>=0; l--) {
            cout << char('A' + l);
        }
        cout << endl;
    }

  // answer 9.
      int n;
    cout << "Enter a number to check whether it can be expressed as a sum of two prime numbers: ";
    cin >> n;

    if(checkSumOfTwoPrimes(n)) {
        cout << n << " can be expressed as a sum of two prime numbers." << endl;
    }
    else {
        cout << n << " cannot be expressed as a sum of two prime numbers." << endl;
    }

  // answer 10.
  int rows, columns;
  cout<<"Enter rows star number:";
  cin>>rows;
  cout<<"Enter columns str number:";
  cin>>columns;
  for(int i=1;i<=rows;i++){
    for(int j=1;j<=columns;j++){
      cout<<"*";
    }
    cout<<endl;
  }
return 0;
}