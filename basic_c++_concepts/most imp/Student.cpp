#include<cstring>
#include<iostream>

using namespace std;
class Student{
    char sname[50];
    float marks[6];
    float total;
    float max_marks;
    public:
    Student ();
    void assign();
    void compute();
    void display();

};
Student::Student(){
     strcpy(sname," ");
     for(int i=0;i<6;i++){
        marks[i]=0;
    }
        
        total=0;
        max_marks=0;
    } 
     void Student::assign(){
        cout<<endl<<"enter student name:";
        cin>>sname;
        for(int i=0;i<6;i++){
            cout<<"Enter marks of "<<i+1<<" subject:";
            cin>>marks[i];
        }
        cout<<"Enter maximum total marks:";
        cin>>max_marks;

     }
     void Student::compute(){
        total=0;
        for(int i=0;i<6;i++){
            total+=marks[i];

        }
    }
        void Student::display(){
            cout<<"Student name:"<<sname<<endl;
            cout<<"Marks are"<<endl;
            for(int i=0;i<6;i++){
                cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
            }
                cout<<"----------"<<endl;
                cout<<"Total"<<total<<endl;
                cout<<"----------"<<endl;
                float per=(total/max_marks)*100;
                cout<<"Percentage:"<<per;
            }
            int main(){
                Student obj;
                obj.assign();
                obj.compute();
                obj.display();

                return 0;
            }
     


