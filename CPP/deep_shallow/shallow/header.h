#include <iostream>
using namespace std;

class node
{
	int a,b,*c;
	public:
		node();
		~node();
		node(int ,int,int);
		node (node &);
		void print();
		int getc();
		void setc();
};
