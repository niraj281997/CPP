#include <iostream>
using namespace std;

class node
{
	private :
		int a;
		char b;
	public :
		node();
		~node();
		void seta(int );
		int geta();
		void setb(char );
		char getb();


};

node :: node()
{
	cout<<"In constructor ";

}
node ::~node()
{
	cout<<"In Distructor ";
}
void node::seta(int x)
{
	a=x;
}
void node::setb(char x)
{
	b=x;
}
int node :: geta()
{
	return a;
}
char node::getb()
{
	return b;

}



int main()
{
	node nexus;
	nexus.seta(100);
		cout<<endl<<nexus.geta()<<endl;
		
	nexus.setb('a');
		cout<<endl<<nexus.getb()<<endl;

return 0;
}
