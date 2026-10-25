#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"abc"<<endl;
    }
};
class B: public A{
    public:
    void fun(){
        cout<<"efg"<<endl;
    }
};
int main()
{
    A obj;
    obj.fun();
    return 0;
}