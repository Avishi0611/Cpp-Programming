//jo chix hame bar bar variables ko initialise krne me no. of lines me code likhna pd rha h uski jagah hm constructor type ka ek function bna kr easily kr skte hai
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
    // Student(){       // default constructor

    // }
};
void print(Student s){
    cout<<s.name<<" "<<s.rollNo<<" "<<s.gpa<<endl;
}
int main(){

    Student s1("Avishi",45,9.4);
    // could overwrite the value even
    // Student s2("pari",75,7.4);
    // Student s3("Arushi",78,8.4);
    // Student s4("didi",25,3.4);
    
    print(s1);
    // print(s2);
    // print(s3);
    // print(s4);

    return 0;

}
