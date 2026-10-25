#include<iostream>
using namespace std;
class Student{
    private:
    float marks;

    public:
    int rollno;
    string name;

     Student(int r, string n, float m){
        rollno=r;
         name=n;
        marks=m;

    }
    // float getmarks(){//getter
    //     return marks;
    // }
    
   
    };
    

int main(){
    Student s1(5,"Avishi",98.6); 
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.marks(63.5)<<endl;
   
    

    
    return 0;
}