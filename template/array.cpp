#include <iostream>
using namespace std;

template <typename T>
class array
{
	T *arr;
	int size;
	public:
		array(T [],int );
		void print();
		
};

template <typename T>
array <T>::array (T a[] ,int s)
{
	arr =new T[s];
	size=s;
	for(int i=0;i<size;i++)
		arr[i]=a[i];


}
template <typename T>
void array <T>::print()
{
	for(int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}

int main()
{	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	array<int> a1(arr,10);
	a1.print();

	return 0;
}
