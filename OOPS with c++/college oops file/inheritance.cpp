#include<iostream>
using namespace std;
class Father{
    protected:
   string surname ="Sharma";

};
class son1:Father{
    string name="Ankur";
    public:
    void show(){
        cout<<name<<" "<<surname<<endl;
    }

};
class son2:Father{
    string name="Aakash";
    public:
    void dis(){
        cout<<name<<" "<<surname<<endl;
    }

};
int main(){
    son1 a;
    a.show();
    son2 b;
    b.dis();
    return 0;
}