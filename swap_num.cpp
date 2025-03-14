#include <iostream>
using namespace std;


void swapnumb(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Value of a: "<<a<<endl<<"Value of b: " <<b<<endl;
}	
int main()
{
	int a,b;
	cout <<"Enter the value of two numbers: ";
	cin>>a>>b;
	cout<<"Value of a: "<<a<<endl<<"Value of b: " <<b<<endl;
	swapnumb(a,b);
	return 0;
}

a = a + b;
    b = a - b;
    a = a - b;

