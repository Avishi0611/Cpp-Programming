#include<iostream>
using namespace std;
int main(){

//    int pocketMoney=3000;

//     for (int n=1;n<=30;n++){
//         if(n%2==0){
//          continue;
//         }
//         if(pocketMoney==0){
//             break;
//         }
//         cout<<"go out today!"<<endl;
//         pocketMoney=pocketMoney-300;
//     }


for(int n=0;n<=100;n++){
    if(n%3==0){
        continue;
    }
    cout<<n<<endl;
}
    return 0;
}