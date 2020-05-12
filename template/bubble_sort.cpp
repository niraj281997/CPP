#include <iostream>
using namespace std;

template <typename T>
class array 
{
	T *arr;
	int size;
	public:
		array (T [], int);
		void print();
		//void bubble(T []);
		void bubble();
};

template <typename T>
array<T>::array(T a[], int s)
{
	arr= new T[s];
	size =s;
	for(int i=0;i<size;i++)
		arr[i]=a[i];
}
template <typename T>
void array<T>::print()
{

	for(int i=0;i<size;i++)
		cout<<"array ["<<i<<"]="<<arr[i]<<endl;
}
template <typename T>
void array<T>::bubble()
{
	T temp;
	int j,i;
	//s=(sizeof(arr)/sizeof(T));
	for (j=0;j<size;j++)
	{
		temp=arr[j];
		for(i=j-1;i>=0 && arr[i]>temp;i--)
			arr[i+1]=arr[i];
		arr[i+1]=temp;

	}


}
int main()
{
	int *a,n;
	cout<<"number of elements"<<endl;
	cin>>n;
	cout<<"Enter elemnets "<<endl;
	a= new int[n];
	for (int i=0;i<n;i++)
	{	cin>>a[i];
		cout<<endl;
	}
	array<int> a1(a,n);
	delete (a);
	a1.print();
	cout<<"Bubble sort "<<endl;
	a1.bubble();
	a1.print();


	return 0;
}
