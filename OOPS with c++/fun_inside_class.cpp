#include<iostream>
using namespace std;
class Cricketer{
   public: 
    string name;
    int runs;
    float avg;
     Cricketer(string name , int runs , float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
      }
     void print(int runs){
        cout<<name<<" "<<this-> runs<<" "<<avg<<endl;
        cout<<runs<<endl;
     }
     int matches(){
      
      return runs/avg;
     }
};
int main(){

    Cricketer c1("virat" ,25000,5.2);
    Cricketer c2("rohit" ,5000,4.2);

 
    c1.runs =5200;



    c1.print(6);
    c2.print(7);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;


// class Student{
//    public:
//    int roll;
//    string name;
//    int age;
//    int showAge(){
//       cout<<"the age is :"<<age;

//    }
// };
// int main(){
//    Student s1;
//    s1.name="Avishi";
//    s1.age=5;
//    s1.roll=9;
//    s1.showAge();







  
   return 0;
}