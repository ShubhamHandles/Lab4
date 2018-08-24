//Q.7. Write a C++ program to calculate area of an equilateral triangle. 

#include<iostream>
#include<cmath>
using namespace std;
int main(){
  cout << "Welcome! I provide area of an equilateral triangle" << endl;

  //declare variables
  double s,area;
  //ask for input
  cout << "Enter the side of your equilateral triangle" << endl;
  cin >> s;
  //perform operations
  area = (sqrt(3.0)/4)*pow(s,2);
  //print results
  cout << "The area of your triangle is " << area << endl;
  return 0;
}
