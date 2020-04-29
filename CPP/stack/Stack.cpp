#include"Stack.h"
template <class T>
Stack<T>::Stack():size(5),top(-1)//,p(new int[size])
{
	p = new T[size];
	cout<<"\nCTOR "<<endl;
}

template <class T>
Stack<T>::Stack(int s):size(s),top(-1)//,p(new int[size])
{
        p = new T[size];
        cout<<"\nCTOR "<<endl;
}

template <class T>
bool Stack<T>::IsEmpty()
{
	return (-1==top);
}

template <class T>
bool Stack<T>::IsFull()
{
	return (size-1==top);
}

template <class T>
T Stack<T>::peep()
{
	if(IsEmpty())
	{
		throw runtime_error("\nStack Underflow!!");
	}
	return p[top];
}


template <class T>
T Stack<T>::pop()
{
	if(IsEmpty())
        {
                throw runtime_error("\nStack Underflow!!");
        }
        return p[top--];
}


template <class T>
void Stack<T>::push(T data)
{
	if(IsFull())
	{
		throw runtime_error("\nStack OverFlow!!");
	}
	p[++top]=data;
}


template <class T>
int Stack<T>::GetTop()
{
	return top;
}


template <class T>
Stack<T>::~Stack()
{
	cout<<"\nStack is Destroyed!"<<endl;
	delete []p;
}
