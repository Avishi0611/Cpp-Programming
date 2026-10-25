#include<iostream>
using namespace std;
inline int Maximum(int a, int b){
    return (a>b)?a:b;
}
int main(){
   cout<<"Max(100,1000):"<<Maximum(100,1000)<<endl;
   cout<<"Max(20,0):"<<Maximum(20,0)<<endl;
    return 0;
}