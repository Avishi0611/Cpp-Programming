//function overloading
#include<iostream>
using namespace std;
float area(int r){
    double aoc=3.14*r*r;

    return aoc;
}
int area(int l,int b){
    int aor=l*b;
    return aor;

}
float area(int h,float B){
    float aot=0.5*h*B;
    return aot;
}
int main(){
    int r;
    cout<<"enter the radius:";
    cin>>r;
    cout<<"the area of circle is :"<<area(r)<<endl;

    int l,b;
    cout<<"enter the length and breadth:";
    cin>>l>>b;
    cout<<"the area of rectangle is :"<<area(l,b)<<endl;

    int h;
    float B;
    cout<<"enter the height and base:";
    cin>>h>>B;
    cout<<"the area of triangle is :"<<area(h,B)<<endl;

    
    return 0;
}