#include<iostream>
using namespace std;
class Scooty{//parent class or base class
    public:
    int topSpeed;
    float mileage;

    private:
    int bootSpace;

};
class Bike: public Scooty{//derived class or child class
    public:
    int gears;
};
class threeWheeler: public Scooty{//derived class or child class
    public:
    int wheels;
};
int main(){
    Bike b1;
    b1.gears=5;
    b1.mileage=85.6;
    b1.topSpeed=89;
    //b1.bootSpace=5;
    cout<<b1.gears<<" "<<b1.mileage<<" "<<b1.topSpeed<<endl;

    return 0;
}
