#include <iostream>
#include <string.h>
using namespace std;

class Student
{
	char name[30];
	int Rollnumber;
	class Address
	{
		private:
			int house_no;
			char street[20],city[20],state[20],pincode[20];
		public:
			Address()
			{
				cout<<"Default Constructor"<<endl;
			}
			void hello()
			{
				cout<<"hello"<<endl;
			}
			void setaddress(int h,char  *a,char *b ,char *c, char *d)
			{
			house_no=h;
			strcpy(street,a);
			strcpy(city,b);
			strcpy(state,c);
			strcpy(pincode,d);
			}
			void printaddress()
			{
				cout<<"Address: "<<house_no<<endl<<street<<endl<<city<<endl<<state<<endl<<pincode<<endl;
			}
			void inter()
			{	//string s;
				cout<<"house Number";
				cin>>house_no;
				cout<<endl<<"street Number :";
				cin>>street;
				cout<<endl<<"Name of city :";
				cin>>city;
				cout<<endl<<"Name of state :";
				cin>>state;
				cout<<endl<<"Name of pincode :";
				cin>>pincode;
			}
	};

	Address add;
	public:
		void setstudent(char *n,int R,int h,char  *a,char *b ,char *c,char *d)
		{
			strcpy(name,n);
			Rollnumber=R;
			add.setaddress(h,a,b,c,d);
		}
		void printstudent()
		{
			cout<<"Name: "<<name<<endl<<"Roll_Number: "<<Rollnumber<<endl;
			add.printaddress();
		}
		void setname()
		{	cout<<"Enter Name ";
			cin>>name;
			cout<<endl;
		}
		void setrollno()
		{	cout<<"Enter Rollnumber ";
			cin>>Rollnumber;
			cout<<endl;
		}
		void setaddress()
		{	cout<<"Set Address";
			add.inter();
			cout<<endl;
		} 
		void hello()
                {
                     	cout<<"hello"<<endl;
                }


};


int main()
{
	int n;
	cout<<"Number of student ";
	cin>>n;
Student *student_array[n];// Non premitive data pointer array in which each pointer will point to the different dyanamic object.
for(int i=0;i<n;i++)
{
	student_array[i]=new Student();
}
student_array[0]->hello();
student_array[0]->setstudent("Mukesh",15,795,"Borivali","Mumbai","Maharashtra state","686ref");
//The above statment will through warnings because  C++ forbids converting a string constant to ‘char*’
//student_array[0]->printstudent();
//student_array[0]->setaddress();
//student_array[0]->printstudent();
student_array[0]->setname();
student_array[0]->setrollno();
student_array[0]->printstudent();
	return 0;
}
