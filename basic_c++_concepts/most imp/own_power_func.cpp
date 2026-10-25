#include<iostream>
using namespace std;
int power(int a,int b){
     int ans=1;
     for(int i=1;i<=b;i++){
       ans=ans*a;
     }    
     return ans;
}
int main(){

    int a;
    cout<<"enter the base:";
    cin>>a;
    int b;
    cout<<"enter the exponent:";
    cin>>b;

    cout<<power(a,b);
    return 0;

}