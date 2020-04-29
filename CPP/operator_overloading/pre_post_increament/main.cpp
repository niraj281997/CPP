#include "defination.cpp"

int main()
{
	node a1;
//	node b1;
	a1.setdata(2,4);
	node b1=a1;
	node c1;
	c1=b1+a1;
	c1.print();
	node d1;
	d1=++c1;
	d1.print();
	node e1;
	e1=b1++;
e1.print();
b1.print();

	return 0;

}
