#include<iostream>
using namespace std;
class Car{
public:
    
        string name;
        int price;
        int seats;
        Car (string s ,int p, int t){ //formation of constructor
            name=s;
            price=p;
            seats=t;

        }
    
    };
    void print(Car c){// formation of function
        cout<<c.name<<" "<<c.seats<<" "<<c.price<<endl;
    }
    int main(){
        Car c1("honda city" ,85000,5);
        Car c2("maruti suzuki" ,80000,6);
        Car c3("BMW " ,7000,5);
       
        
        print(c1);
        print(c2);
        print(c3);
    
    
    return 0;

}