// Multilevel Inheritance

#include<iostream>
using namespace std;
class base
{
	protected:
		int a;
	public:
		void input()
		{
			cout<<"Enter the value:";
			cin>>a;
			
		}
	void show()
		{
			cout<<"The value of a is:="<<a<<endl;
		}
};
class derive1: public base
{
	private:
		int b;
		public:
		void get_data()
		{
			cout<<"Enter the value:";
			cin>>b;
		}
		void display()
		{
			cout<<"The value of b is:="<<b<<endl;
			
		}
};
class derive2: public derive1
{
	private:
		int c;
		public:
		void get_data1()
		{
			cout<<"Enter the value:";
			cin>>c;
		}
		void display1()
		{
			cout<<"The value of c is:=";
			cout<<c<<endl;
		}
};

int main()
{
    base ob;
	ob.input();
	ob.show();
	
	derive1 ob1;
	ob1.get_data();
	ob1.display();
	
	
	
	derive2 ob2;
	ob2.input();
	ob2.show();
	ob2.get_data();
	ob2.display();
	ob2.get_data1();
	ob2.display1();
	
	
	
	return 0;
}
