#include <iostream>
using namespace std;

class node
{
	int a,b,*c;
	public:
		node();
		~node();
		void setdata(int ,int,int);
		node (node &);
		void print();
		int getc();
		void setc();
};
