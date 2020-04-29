#include <iostream>

using namespace std;

class node
{
	float x;
	public:
	node()
	{
		cout<<"Default "<<endl;
	}
	~node()
	{
		cout<<"Distructor"<<endl;
	}
	void arithmetic(int a,int b)
	{
		x=a+b;
	}
	void  arithmetic (float a,int b)
	{
		x=a*b;
	}
	int getx()
	{
		return x;
	}

};
int main()
{
	node a1;
	float x=3.56561;
	float y=56.265;
	a1.arithmetic(1,2);
	cout<<a1.getx()<<endl;
	a1.arithmetic(x,y);
	cout<<a1.getx()<<endl;
	return 0;
}

