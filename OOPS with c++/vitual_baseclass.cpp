#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Hello from A:";

    }
};
class B: public virtual A{
    // statement;
};
class C: public virtual A{
    //statement;
};
class D:public B , public C{
    //statement;
};
int main(){
   D obj;
   obj.show();
   return 0;
}