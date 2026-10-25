#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    Student(string name , int roll){
        this->name=name;
        this->roll=roll;
    }
};
int main(){
    Student s1("Avishi" ,45);
    cout<<s1.name<<" "<<s1.roll<<endl;
    Student s2("supriya" ,5);
    cout<<s2.name<<" "<<s2.roll<<endl;
    return 0;
}
int main()
{
    student s1("Avishi" ,45);
cout<<s1.name<<""<<s1.roll<<endl;


}
