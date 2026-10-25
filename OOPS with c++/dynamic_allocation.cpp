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
    
    int main(){
    
       
        Student *s2=new Student ("Aashi",78,7.4); 
        
    cout<<s2->name<<" "<<s2->gpa<<endl; //it can also be written using pointer 
    
    cout<<(*s2).name<<" "<<(*s2).gpa<<" "<<(*s2).rollNo<<endl;;


        //dynamic allocation is the memory allocation in the runtime of code
        int *ptr=new int(2356);
        //yha pr koi naya variable nhi bna instead ptr ek pointer variable hoga joki ek ese varaible k address ko store kerag jika koi nam nhi h pr uske andr value store h 2356 
        // and *ptr print krwane pr wo usk andr store address ki andr ki value print krwa dega
        cout<<*ptr<<endl;
        
        return 0;

    }
    