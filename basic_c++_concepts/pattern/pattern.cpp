#include<iostream>
using namespace std;
int main(){

    int n;
    
    cin>>n;
    

     //rectangle 
    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=m ; j++){
    //         cout<<"* ";

    //     }cout<<endl;
    // }
      
    // hollow rectangle
    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=m;j++){
    //         if(i==1 ||i== n || j==1 || j==m ){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
                
    //         }
    //     }
    //     cout<<endl;
    // }
     
   // half pyramid for 180 
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j<=n-i){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }cout<<endl;
    // }

    // inverted half pyramid
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //        cout<<"*";
    //     }cout<<endl;
    // }


    // for integer printing in each line
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;

        }
        cout<<endl;
    }
    return 0;

}