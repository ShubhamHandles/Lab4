//Q.3. Write a C++ program to enter temperature in Fahrenheit and convert to Celsius.

#include<iostream>
using namespace std;
int main(){
  cout << "Welcome to the temperature converter!" << endl;
  
  //declare variables
  float a,temp;
  //ask for input
  cout << "Enter the temperature(in °F) you want to convert" << endl;
  cin >> temp;
  //perform operations
  a = (temp - 32)*5.0/9;
  //print results
  cout << "Your temperature in °C is " << a << endl;
  cout << "Thanks!" << endl;
  return 0;
}
