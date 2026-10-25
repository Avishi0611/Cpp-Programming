#include<iostream>
using namespace std;
class Scooty{//parent class or base class
    public:
    int topSpeed;
    int bootSpace;
   protected:
   int vol;
};
class Bike{//parent class
    public:
    int gears;
    float mileage;
};
class Car:
public Bike,Scooty{
    public:
    int wheels;


    
};
int main(){
    Car c1;
    c1.wheels=5;
    
    

    return 0;
}


    
  