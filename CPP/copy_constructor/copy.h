#include <iostream>
using namespace std;

class xy
{
	int a,b;
	public:
		xy();
		~xy();
		xy(int,int );
		xy (xy &);
		void print();
		//geeter and setter 

		void seta();
		void setb();
		int geta();
		int getb();
};
