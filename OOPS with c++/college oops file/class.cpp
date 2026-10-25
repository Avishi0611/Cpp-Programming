
#include<iostream> 
using namespace std;
class sample 
{
private: 
int a;
char b;
float c;
public: 
void get_data() {
cout<<"Enter an integer value:";
cin>>a;
cout<< "Enter a character:";
cin>>b;
cout<<"Enter a float value:";
cin>>c;
}
void print_data(){ 

cout<<"Values read from keyboard:"<<endl; 
cout<<"Integer value:"<<a<<endl; 
cout<<"character value:"<<b<<endl; 
cout<<"float value :"<<c<<endl; 
}
};
int main() {
sample s;
s.get_data(); 
s.print_data(); 
return 0;
}