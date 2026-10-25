//passing pointers to functions
#include<iostream>
using namespace std;
//call by value
// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;

// }
// int main(){
//     int a=10;
//     int b=9;

//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

    //call by refernece
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int a=10;
//     int b=9;
//     int *aptr=&a;
//     int *bptr=&b;

//     swap(aptr,bptr);
//     cout<<a<<" "<<b<<endl;
//     return 0;


//}

void increment(int *a){
    *a++;
}
int main(){
    int a=10;
    int *aptr=&a;
    increment(aptr);
    cout<<a<<endl;
    return 0;
}