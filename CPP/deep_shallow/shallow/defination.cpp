#include "header.h"

node :: node()
{
	cout<<"default "<<endl;
}
node :: ~node()
{
	cout<<"Distructor "<<endl;
}
node :: node(int x,int y, int z)
{
	cout<<"perameterised constructor "<<endl;
	c= new int;
	a=x;
	b=y;
	*c=z;
}
node::node(node &tra)
{
	a=tra.a;
	b=tra.b;
	c=tra.c;
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
