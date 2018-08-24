//Q.10. Write a C++ program to enter P, T, R and calculate Compound Interest.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
  cout << "Welcome to the compound interest calculator!" << endl;

  //decalre variables
  double A,P,R,n,T,I;
  //ask for input
  cout << "Enter the principle amount" << endl;
  cin >> P;
  cout << "Enter the rate of interest(decimal)" << endl;
  cin >> R;
  cout << "Enter the time(years)" << endl;
  cin >> T;
  cout << "Enter the number of times interest is compounded per year" << endl;
  cin >> n;
  //perform operations
  A = P*pow((1+R/n),n*T);
  I = A-P;
  //print results
  cout << "Your interest amount is " << I << endl;
  return 0;
}
 
