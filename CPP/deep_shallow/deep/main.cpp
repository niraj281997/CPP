#include "defination.cpp"

int main()
{
	node node1;
	node1.setdata(1,2,3);
	node node2=node1;
	node1.print();
	node2.print();
	node1.setc();
	cout<<node1.getc()<<endl;
	cout<<node2.getc()<<endl;
}
