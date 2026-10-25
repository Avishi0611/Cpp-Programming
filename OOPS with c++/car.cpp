#include<iostream>
using namespace std;
class Car{
public:
    
        string name;
        int price;
        int seats;
    
    };
    void print(Car c){
        cout<<c.name<<" "<<c.seats<<" "<<c.price<<endl;
    }
    void change(Car& c){//call by refrence(c1 ki shallow copy)
        c.name="fortuner";
    }

    // void change(Car c){//call by value(c1 ki deep copy)
    //     c.name="fortuner";
    // }
  
    int main(){
        Car c1;
        c1.seats=5;
        c1.price=85000;
        c1.name="Honda City";
        
        print(c1);
        change(c1);
        print(c1);   
        

        return 0;
    }
