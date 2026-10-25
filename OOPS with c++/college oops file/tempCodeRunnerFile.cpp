#include<iostream>
using namespace std;

class add {
  private:
    int a, b;
  public:
    void getData();
    int addTwo();
};

// get the two number from user
void add::getData() {
  cout << "Enter Two Numbers: ";
  cin >> a >> b;
}

// add two number
int add::addTwo() {
  int sum;
  sum = a + b;
  return sum;
}

int main() {
    
  int sum;
  // creating object of class
  add s;
  s.getData();
  sum=s.addTwo();
  cout << "sum of two number:" <<sum<<endl;
  return 0;
}