#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //sorting in ascending order
    // string s1="gsdbghbznzlkxjzbkgxvabx";
    // sort(s1.begin(), s1.end());
    // cout<<s1<<endl;

    //make a greatest number out of the given number
     //sorting in descending order

    string s="8542361769";
    sort(s.begin() , s.end() , greater<int>());
    cout<<s<<endl;
    return 0;
}