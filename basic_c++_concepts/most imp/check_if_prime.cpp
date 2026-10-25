#include<iostream>
using namespace std;
int main(){

    // int i,n;
    // cin>>n;
   
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"it is not  prime"<<endl;
    //         break;
    //     }
        
    // }
    // if(i==n){
    //     cout<<"it is prime"<<endl;
    // }

    // int a,b,i;
    // cin>>a>>b;
    // for(int num=a;num<b;num++){
    //     for(i=2;i<num;i++){
    //         if(num%i==0){
    //             break;

    //         }
    //     }
    //     if(i==num){
    //         cout<<num<<endl;
    //     }
    // }



    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime";
            flag=1;
            break;
        }
        
        }
        if(flag==0){
            cout<<"it is prime";
        }
    
    return 0;
}