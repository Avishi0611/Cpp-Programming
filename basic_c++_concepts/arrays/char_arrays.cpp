#include<iostream>
using namespace std;
int main(){
    // char arr[100]="avishi";
    // int i=0;
    // while(arr[i] != '\0'){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

    // char arr[50];
    // cin>>arr;

    // cout<<arr[4];

    // largest word in a sentence
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr , n);
    cin.ignore();
    
    int i=0;
    int currLen=0 , maxLen=0;
    while(1){
        if(arr[i] ==' '|| arr[i]== '\0'){

            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;

        }else{

        }
        
        currLen++;
        
        if(arr[i] !='\0'){
            break;
            i++;
        }
    }
    cout<<maxLen<<endl;


    
    return 0;
}