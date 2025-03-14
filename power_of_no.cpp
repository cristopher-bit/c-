#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num,p;
	cout<<"Enter the Number: ";
	cin>>num;
	cout<<"Enter Power: ";
	cin>>p;
	int power=pow(num,p);
	cout<<"Power of the Number "<<num<<" is: "<<power<<endl;
	return 0;
}
