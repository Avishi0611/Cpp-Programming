#include<iostream>
using namespace std;
// class A{
//     public:
//     int a=10,b=20;
//     private:
//     void show(){
//         cout<<a<<" "<<b<<endl;

//     }
  
// };
// class B{
//     public:
//     friend void add(A r){
//         int add=r.a+r.b;
//         cout<<"sum is:"<<add;

//     }
// };

class A{
    private:
    int marks=5;

    public:
    friend void display(int marks);
};
void display(int marks){
    int time=marks;
    cout<<time;
    cout<<"skjbs";
}
    
int main(){
    int marks;
    display(marks);
   
//   A obj;
//   B obj1;
//   obj.show();

//   obj1.add(obj); 


    return 0;
}