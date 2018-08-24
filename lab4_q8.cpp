//Q.8. Write a C++ program to enter marks of five subjects and calculate total, average and percentage.

#include<iostream>
using namespace std;
int main(){
  cout << "Hello user! I will give you total, average and percentage of your scores" << endl;

  //decalre variables
  double S1,S2,S3,S4,S5,max,total,average,percentage;
  //ask for input
  cout << "Enter the score of your first subject" << endl;
  cin >> S1;
  cout << "Enter the score of your second subject" << endl;
  cin >> S2;
  cout << "Enter the score of your third subject" << endl;
  cin >> S3;
  cout << "Enter the score of your fourth subject" << endl;
  cin >> S4;
  cout << "Enter the score of your fifth subject" << endl;
  cin >> S5;
  cout << "Enter the sum of maximum possible scores for all subjects" << endl;
  cin >> max;
  //perform operations
  total = (S1+S2+S3+S4+S5);
  average = total/5;
  percentage = (total/max)*100;
  //print results
  cout << "Your total score is " << total << endl;
  cout << "Your average score is " << average << endl;
  cout << "Your total percentage is " << percentage << endl;
  return 0;
}
