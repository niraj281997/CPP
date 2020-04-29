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
		node operator ++();//pre increament;
		node operator ++(int );//pre increament;
		void print();


};

