//Q.4. Write a C++ program to convert days into years, weeks and days. 

#include<iostream>
using namespace std;
int main(){
  cout << "Hello user! Welcome to the day converter" << endl;

  //Declare variables
  int a,b,c,days;
  //ask for input
  cout << "Enter your number of days to be converted" << endl;
  cin >> days; 
  //perform operations
  a = days/365;
  b = (days%365)/7;
  c = (days%365)%7;
  //print results
  cout << "Your Number of days = " << endl;
  cout << a << " years " << b << " weeks " << c << " days " << endl;
  return 0;
}
