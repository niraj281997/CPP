#include "header.h"

node :: node()
{
	c= new int;
	cout<<"default "<<endl;
}
node :: ~node()
{
	cout<<"Distructor "<<endl;
}
void node :: setdata(int x,int y, int z)
{
	cout<<"assign the value to the variable "<<endl;
	a=x;
	b=y;
	*c=z;
}
node::node(node &tra)
{
	c= new int;
	a=tra.a;
	b=tra.b;
	*c=*(tra.c);
}
void node ::print()
{
	cout<<"\tprinting object data"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<*c<<endl;
}
int node ::getc()
{
	return *c;
}
void node:: setc()
{
	cin>>*c;
}
