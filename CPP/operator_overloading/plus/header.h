#include <iostream>

using namespace std;

class node 
{
	int a,b;
	public:
		node();
		~node();
		void setdata(int ,int );
		node (node &);
		node operator +(const node &);
		void print();


};

