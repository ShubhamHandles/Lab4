//Q.9. Write a C++ program to enter P, T, R and calculate Simple Interest. 

#include<iostream>
using namespace std;
int main(){
  cout << "Welcome to the simple interest provider!" << endl;
 
  //decalre variables
  double P,R,T,interest;
  //ask for input
  cout << "Enter the principle amount" << endl;
  cin >> P;
  cout << "Enter the rate of interest(%)" << endl;
  cin >> R;
  cout << "Enter the time period" << endl;
  cin >> T;
  //perform operations
  interest = (P*R*T)/100;
  //print results
  cout << "Your interest amount is " << interest << endl;
  return 0;
}
