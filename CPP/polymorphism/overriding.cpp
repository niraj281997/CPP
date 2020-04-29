#include <iostream>
using namespace std;

class X
{
	int a;

	public:
		virtual void set()
		{	cout<<"parent class"<<endl;
			cin>>a;
		}
		virtual  int  getx()
		{
			return a;
		}
		void fun()
		{
			cout<<"In Perent class"<<endl;
		}
		
};
class Y:public X
{

	int b;

	public:
		void set()
		{	cout<<"Derived class"<<endl;
			cin>>b;
		}
		int  getx()
		{	
			return b;
		}
		void fun()
		{
			cout<<"In derive  class"<<endl;
		}


};


int main()
{
	X a2;
	Y a1;
	a2.fun();
	a1.fun();
	X *p;
	a1.set();
	cout<<a1.getx()<<endl;
	p=&a1;
	p->set();
	cout<<p->getx()<<endl;
}

