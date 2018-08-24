//Q.5. Write a C++ program to enter two angles of a triangle and find the third angle. 

#include<iostream>
using namespace std;
int main(){
  cout << "Welcome to the angle provider!" << endl; 

  //declare variables
  double angle1,angle2,angle3;
  //ask for inputs
  cout << "Enter the first angle " << endl;
  cin >> angle1;
  cout << "Enter the second angle " << endl;
  cin >> angle2;
  //perform operations
  angle3 = 180-(angle1+angle2);
  //print results
  cout << "Your third angle is " << angle3 << endl;
  return 0;
}
