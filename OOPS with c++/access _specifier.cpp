#include<iostream>
using namespace std;
class Myclass{
    public:
    void publicFunction(){
        cout<<"Public function called:"<<endl;

    }
private:
int privateVariable;
void privateFunction(){
    cout<<"Private function called:"<<endl;

}
protected:
void protectedunction(){
    cout<<"Protected function called:"<<endl;

}
};
int main(){
    Myclass obj;
    obj.publicFunction();
    return 0;
}

