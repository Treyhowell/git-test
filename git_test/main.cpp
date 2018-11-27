//
//  main.cpp
//
//  Created by Trey howell on 11/27/18.
//

#include <iostream>
#include <iomanip>
int sum(int num);
using namespace std;
int main() {
  int num;
  cout << "enter a number ";
  cin >> num;
  cout << endl;
  cout << "here is the sum of your numer starting from 1: ";
  cout << sum(num);
  cout << endl;

  return 0;
}
int sum(int num){
  if(num != 0)
    return num + sum(num- 1);
  return 0;
}

