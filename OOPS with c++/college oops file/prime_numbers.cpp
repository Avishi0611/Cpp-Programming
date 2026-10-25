#include<iostream>
using namespace std;
int main(){

int n,i;
cout<<"Enter the number of terms:";
cin>>n;
cout<<"Prime numbers between 1 to "<<n<<" are:";

for(int num=1;num<n;num++){
    for(i=2;i<num;i++){
        if(num%i==0){
            break;

        }
    }
    if(i==num){
        cout<<num<<" ";
    }
}
return 0;
}