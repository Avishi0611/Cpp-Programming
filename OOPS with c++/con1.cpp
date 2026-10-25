#include<iostream>
using namespace std;
class Volume{
    public:

    int length;
    int breadth;    
    int height;

    Volume (int l,int b,int h){
        length=l;
         breadth=b;
         height =h;

         cout<<l*b*h<<endl;
    }
    

    
};
int main(){

    Volume v(5, 2 , 1);
    
   
    return 0;
}