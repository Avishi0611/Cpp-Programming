#include<iostream>
using namespace std;
class Demo{
    private:
    int num1,num2;
    public:
    Demo(int n1, int n2){
        cout<<"Inside constructor"<<endl;
        num1=n1;
        num2=n2;

    }
    void getDisplay(){

        cout<<"Num1:"<<num1<<"Num2:"<<num2<<endl;
    }
     ~ Demo(){
        cout<<"Inside Destructor:";
    }
};
int main(){
    Demo obj1(10,20);
    obj1.getDisplay();

   
    return 0;
}