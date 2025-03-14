#include <iostream>
using namespace std;


int AON()
{
	int a, b;
	cout<<"Enter the two numbers: ";
	cin>>a>>b;
	return a+b;
}

int  AOC()
{
	char a,b;
	cout<<"Enter two Characters: ";
	cin>>a>>b;
	return a+b;
}

int main()
{
	int a,c,b;
	cout<<"1. Addition of two numbers \n2. Additions of two characters\n3. Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<AON()<<endl;
			break;
		case 2:
			cout<<AOC()<<endl;
			break;
		default:
			exit(0);
	}



	return 0;
}
	
