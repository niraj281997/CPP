#include<iostream>
using namespace std;
class Employee
{
	private :
		string name;
		string department;
		int number;
	public:
		Employee();
		~Employee();
		void setname();
		void setdepartment();
		void setnumber();
		string getname();
		string getdepartment();
		int getnumber();
};
Employee::Employee()
{
	cout<<"Default constructor"<<endl;
}
Employee::~Employee()
{
cout<<"Default Distructor "<<endl;
}
void Employee::setname(){getline(cin,name);}
void Employee::setdepartment(){getline(cin,department);}
void Employee::setnumber(){cin>>number;}
string Employee::getname(){return name;}
string Employee::getdepartment(){return department;}
int Employee::getnumber(){return number;}
int main()
{
	return 0;

}

