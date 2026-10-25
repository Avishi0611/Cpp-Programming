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
     
    };
    void print(Cricketer c){
        cout<<c.name<<" "<<c.runs<<" "<<c.avg;    
      }
    void change(Cricketer *c){
        (*c).avg =112.3; // *c.avg can be written as c->avg

        
    }
      int main(){
      
          Cricketer c1("virat" ,25000,5.2);
          cout<<c1.avg<<endl;
          change(&c1);
          cout<<c1.avg<<endl;

           
        //    Cricketer c2("rohit" ,5000,4.2);

           Cricketer *p1= &c1;
           cout<<p1<<endl;
           cout<<((*p1).runs)<<endl;//c1.runs
           cout<<((*p1).name)<<endl;
           (*p1).avg=8.36;
           cout<<((*p1).avg)<<endl;

        // print(c1);
        // print(c2);
        

         


        return 0;
      }
      