#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int marks;
	public:
		void getName()
		{
			getline( cin, name );
		}
		void getMarks()
		{
			cin >> marks;
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student st[5];
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 ;
		cout <<endl<<"Enter name" ;
		st[i].getName();
		cout <<endl<<"Enter marks";
		st[i].getMarks();
		cout<<endl;
	}

	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}
