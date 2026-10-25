#include<iostream>
using namespace std;
int main(){
    // int i=1;
    // int j=2;
    // int k;
    // k = i + j + i++ + j++ + ++i + ++j;

    // cout<<i<<" "<<j<<" "<<k<<" "<<endl;

    
    // int i=0;
    // i=i++ - --i + ++i - i--;
    // cout<<i<<endl;


    // int i=1,j=2,k=3;
    // int m=i-- - j-- - k--;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;


    int i=10 ,j=20 ,k;
      //10  //9   //19  //20   //9   //20   //10  //19
    k=i-- - i++ + --j - ++j  + --i - j-- +   ++i - j++;

    //i=9 ,i=10 ,j=19 ,j=20,i=9 ,j=19 ,i=10, j=20
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<k<<endl;
    return 0;
}
