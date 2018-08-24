//Q.2. Write a C++ program to enter temperature in Celsius and convert it into Fahrenheit.

#include<iostream>
using namespace std;
int main(){
  cout << "Welcome to the temperature converter!" << endl;
  
  //declare variables
  float a,temp;
  //ask for input
  cout << "Enter the temperature(in °C) you want to convert" << endl;
  cin >> temp;
  //perform operations
  a = (9.0/5)*temp + 32;
  //print results
  cout << "Your temperature in °F is " << a << endl;
  cout << "Thanks!" << endl;
  return 0;
}
