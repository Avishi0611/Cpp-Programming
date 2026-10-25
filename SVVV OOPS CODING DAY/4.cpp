#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter C for Celsius and F for fahrenheit :";
cin>>ch;

float temp;
cout<<"Enter the temp:";
cin>>temp;

if(ch=='F'){
    cout<<"the temperature in CELSIUS  is:"<<(float)(temp - 32)*0.55<<endl;
   
}

else if(ch=='C'){
    cout<<"the temperature in fahrenheit is:"<<(float)(1.8*temp)+32<<endl;

}
return 0;

}




