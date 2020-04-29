#include "header.h"

node::node()
{
	cout<<"Defaulte "<<endl;

}
node::~node()
{
	cout<<"Distructor"<<endl;
}

void node:: setdata(int x,int y)
{
	a=x;
	b=y;
}
node node::operator +( const node  &tra)
{
	node temp;
	temp.a=a+tra.a;
	temp.b=b+tra.b;
	return temp;

}
node node :: operator ++()
{
	node temp;
	temp.a=++a;
	temp.b=++b;
	return temp;

}

node node :: operator ++(int )
{
	node temp;
	temp.a=a++;
	temp.b=b++;
	return temp;
}

node::node(node &tra)
{
	a=tra.a;
	b=tra.b;
}
void node:: print()
{
	cout<<"\t\tObject data printing "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
