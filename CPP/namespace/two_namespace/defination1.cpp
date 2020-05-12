#include <iostream>
using namespace std;

namespace MT
{
	int a,b;
	class Node 
	{
		int x,y;
		public:
			Node()
			{cout<<"Default Constructor "<<endl;}
			Node(int a1,int a2)
			{
				x=a1;
				y=a2;

			}
			void print()
			{
				cout<<"Object data \n"<<x<<endl;
				cout<<y<<endl;
			}

	};
	void F()
	{
		cout<<"In MT namespace "<<endl;
	}
}
