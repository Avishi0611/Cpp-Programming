#include<iostream>
using namespace std;
int main(){
    double num,deno,divide;
    cout<<"enter numerator:";
    cin>>num;
    cout<<"enter denominator:";
    cin>>deno;
    try{
        if(deno==0)
        throw 0;
        divide = num/deno;
        cout<<num<<"/"<<deno<<"="<<divide<<endl;
    }
    catch(int numr){
        cout<<"error :can not be divide by "<<numr<<endl;
    }
    return 0;
}