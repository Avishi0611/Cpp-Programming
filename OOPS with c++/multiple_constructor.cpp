#include<iostream>
using namespace std;
class Student{
    public:
    
    string name;
    int rollNo;
    float gpa;
    Student(string s,int r,float g){//parameterised constructor
        name = s;
        rollNo = r;
        gpa = g;


     }
   
};
void print(Student s){
    cout<<s.name<<" "<<s.rollNo<<" "<<s.gpa<<endl;
}
int main(){

    Student s1("Avishi",45,9.4);
    Student s4(s1);// copying constructor,
    s4.name="fufa";
    Student s5=s1;// deep copy
    s5.name="devi";
    print(s5);
    print(s1);
    print(s4);
    return 0;
}