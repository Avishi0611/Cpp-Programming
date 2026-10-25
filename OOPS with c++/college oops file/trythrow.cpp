#include<iostream>
using namespace std;
int main(){
    double bal=1000.50;
    try{
        double amt;
        cout<<"enter deposit amount:";
        cin>>amt;

        if(amt<=0){
            cout<<"invalid deposit amount :"<<endl;

        }bal=bal+amt;
        cout<<"Available amount:" <<bal<<endl;
        cout<<"Enter withdrawn amount:";
        cin>>amt;
        if(amt<=0){
            cout<<"invalid withdrawn amount "<<endl;
        }
        bal=bal-amt;
        cout<<"Available amount:" <<bal<<endl;


    }catch(exception e){
        cout<<e.what();
    }

    return 0;
}