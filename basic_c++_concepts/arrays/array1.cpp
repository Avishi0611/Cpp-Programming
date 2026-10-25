#include<iostream>
using namespace std;
int main(){
    // int arr[5]={1,2,34,45,6};
    // cout<<arr[2]<<endl;

    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" "<<endl;
    }
    return 0;
}