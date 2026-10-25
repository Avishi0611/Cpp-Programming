#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //UPPER CASE TO LOWER CASE
    string str="AVISHI ";
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    //LOWER CASE TO UPPER CASE
    string str1="avishi";
    for(int i=0;i<str1.size();i++){
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i]-=32;
        }
    }
    cout<<str1<<endl;

    //using inbuilt function
    //lower to upper OR UPPER TO LOWER
    string s="DGWBKBDHDKBKS";
    transform(s.begin() , s.end() , s.begin() ,::tolower);
    cout<<s<<endl;
    return 0;
}