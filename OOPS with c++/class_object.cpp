#include<iostream>
using namespace std;
class Car{
    public:

    string name;
    int price;
    int seats;

};
int main(){
    Car c1;
    c1.seats=5;
    c1.price=85000;
    c1.name="Honda City";

    Car c2;
    c2.seats=6;
    c2.price=80000;
    c2.name="Maruti suzuki";

    Car c3;
    c3.seats=7;
    c3.price=70000;
    c3.name="BMW";

    cout<<c1.name<<" "<<c1.seats<<" "<<c1.price<<endl;
    cout<<c2.name<<" "<<c2.seats<<" "<<c2.price<<endl;
    cout<<c3.name<<" "<<c3.seats<<" "<<c3.price<<endl;
     return 0;
}


