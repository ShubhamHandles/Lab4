//Q.6. Write a C++ program to enter base and height of a triangle and find its area. 

#include<iostream>
using namespace std;
int main(){
  cout << "Welcome to the area calculator!" << endl;
  
  //declare variables
  double base,height,area;
  //ask for inputs
  cout << "Enter the base of your triangle" << endl;
  cin >> base;
  cout << "Enter the height of your triangle" << endl;
  cout << "(Warning the unit for height and the base should be same!)" << endl;
  cin >> height;
  //operations
  area = 0.5*base*height;
  //print results
  cout << "The area your triangle = " << area << " square units" << endl;
  return 0;
}
