#include<iostream>
using namespace std;
class Vehicle{//parent class or base class
    public:
    int topSpeed;
    float mileage;
    int gears;

    
};
class TwoWheeler: public Vehicle{//derived class or child class
    public:
    int wheels;
  
};
class FourWheeler: public Vehicle{//derived class or child class
    public:
    string sunroof;
  
};
class Car: public FourWheeler{//grand child class
    public:
    int seats;
  
};
class Scooty: public TwoWheeler{//grand child class
    public:
    int bootspace;
  
};
int main(){
    Scooty s1;
    s1.bootspace=5;
    s1.wheels=2;
    Car c1;
    c1.gears=8;
    

    TwoWheeler t1;
    t1.wheels=5;
    return 0;
}
