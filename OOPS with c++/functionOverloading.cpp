#include<iostream>
using namespace std;
class Add{
    public:
    int sum(int a,int b){
        return a+b;

    }
    int  sum(int a,int b,int c){
        return a+b+c;
        
    }
    string sum(string a,string b){
        return a+b;
        
    }
    void sum(int a, int b , int c ,int d){
        cout<<a+b+c+d<<endl; 
    }
};
int main(){
    Add a;
   cout<< a.sum(5,6)<<endl;
    cout<<a.sum(8,6,9)<<endl;
    cout<<a.sum("Avishi","Jain")<<endl;
    a.sum(8,6,9,10);
        return 0;
}