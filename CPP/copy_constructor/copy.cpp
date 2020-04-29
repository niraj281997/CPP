#include "copy.h"

xy::xy()
{
	cout<<"default constructor "<<endl;
}
xy::~xy()
{
	cout<<"Distructor "<<endl;
}
xy::xy(int x, int y)
{
	cout<<"perametrised constructor "<<endl;
	aa=x;b=y;
}
xy::xy(xy &p)
{
	cout<<"copy constructor "<<endl;
	a=p.a;b=p.b;
}
void xy::print()
{
	cout<<"First element :"<<a<<endl;
	cout<<"Second element :"<<b<<endl;

}

void xy::seta()
{
	cin>>a;
}
void xy::setb()
{

	cin>>b;
}
int xy::geta()
{
	return a;
}
int xy::getb()
{
	return b;
}
