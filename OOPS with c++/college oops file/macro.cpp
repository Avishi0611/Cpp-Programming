#include<iostream>
using namespace std;
#define Maximum(a,b)(a>b)?a:b;
int main(){
    cout<<"Max(100,1000):";
    int k=Maximum(100,1000);
    cout<<k<<endl;

    cout<<"Max(20,0):";
    int k1=Maximum(20,0);
    cout<<k1<<endl;
    return 0;
}
