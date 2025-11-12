#include<iostream>
using namespace std;

class MyStack
{
int Stack[100], Top, MaxSize; 

//Im adding a comment in your code

public:

MyStack( int Size = 100 )
{	MaxSize = Size; 
    Top = 0;} 
bool isEmpty()
{
	return (Top == 0);
} 
bool isFull()
{
	return (Top == MaxSize);
}
bool push(int Element)
{
	if(isFull())
	{
		cout<<"Stack is Full.\n";
		return false;
	}
	else
	{Stack[Top++] = Element;
	return true;}
}	
bool pop()
{
	if(isEmpty())
	{
		cout<<"Stack is Empty.\n";
		return false;
	}
	else
	{
		Top--;
		return true;
	}
		
}
int topElement()
{
	return Stack[Top-1];
}
void show()
{
	if(isEmpty())
	{
		cout<<"Stack is Full.\n";
		return;
	}
	else
	{
		for(int i=Top-1; i>=0;i--)
		{
			cout<<Stack[i]<<endl;
		}
	}
} 
};
int main()
{
	MyStack s;
	s.push(10);
	s.show();
	s.push(20);
	s.show();
	s.push(30);
	s.show();
	s.pop();
	s.show();
	s.push(40);
}
