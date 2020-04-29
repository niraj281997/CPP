#include "copy.cpp"
int main()
{

	xy node (1,2);
	node.print();
	xy node2;
	node2=node;
	node2.print();
	node2.seta();
	cout<<node2.geta()<<endl;
	cout<<node.geta()<<endl;
	return 0;
}
