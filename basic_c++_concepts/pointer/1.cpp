#include<iostream>
using namespace std;
int main(){
    // int a=10;
    // int *aptr;
    // aptr=&a;
    // cout<<aptr<<endl;
    // //cout<<*aptr<<endl;

    // aptr++;
    // cout<<aptr<<endl;

    // pointers and arrays
    int arr[]={1,2,3};
 
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
   cout<<*(arr+i)<<endl;
   //arr++ is illegal
    }
    
    return 0;
}