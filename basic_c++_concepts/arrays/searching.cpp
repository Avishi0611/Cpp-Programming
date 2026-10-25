//searching in arrays
#include<iostream>
using namespace std;
int linearSearch(int arr[] , int n , int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        cout<<i;
    }
}
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    linearSearch(arr , n, key);
    return 0;
}