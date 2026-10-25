#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=0;i<=n;i++){
       nextTerm=t1+t2;
       cout<<t1<<" ";
       t1=t2;
       t2=nextTerm;

    }return ;
}
int main(){

    int n;
    cin>>n;

    fib(n);
    int arr[n];
    
    for(int i=0;i<n;i++){
    int t1=0;
    int temp=t1;
    arr[i]=temp;
     }
    
    return 0;

}
