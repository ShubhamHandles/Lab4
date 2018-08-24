//Q.1. Write a C++ program to enter length in centimeter and convert it into meter and kilometer. 

#include<iostream>
using namespace std;
int main(){
  cout << "Welcome to the unit converter!" << endl;
  
  //Declare variables
  float a,b,length; 
  //Ask for the input
  cout << "Enter your lenth in cm" << endl;
  cin >> length;
  //Perform operations
  a = length/100;
  b = length/1000;
  //Print results
  cout << "Your length in meter is " << a << endl;
  cout << "And your length in kilometer is " << b << endl;
  return 0;
}
