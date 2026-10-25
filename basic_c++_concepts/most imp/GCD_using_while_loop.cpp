#include<iostream>
using namespace std;
int main(){
    int a,gcd;
    cout<<"enter the first number";
    cin>>a;
    int b;
    cout<<"enter the second number";
    cin>>b;

    // for(int i=1;((i<=a)&&(i<=b));i++){
        
    //     if((a%i==0) && (b%i==0)){
    //         gcd=i;
    //     }

        
    // }cout<<"the GCD  is :"<<gcd;


    int i=1;
    while((i<=a)&&(i<=b)){
        if((a%i==0) && (b%i==0)){
                   gcd=i;
}
i++;
}cout<<gcd;


   return 0;
}