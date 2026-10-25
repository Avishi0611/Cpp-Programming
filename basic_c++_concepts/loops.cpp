#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    //for loop
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;

    }
    cout<<sum<<endl;

     //while loop
    while(n>0){
        cout<<n<<endl;
        cin>>n;

    }
     //do while loop
    do {
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}