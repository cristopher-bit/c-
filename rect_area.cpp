#include <iostream>
using namespace std;

void rectarea(int l, int b)
{
	int area=l*b;
	cout<<"Area of rectangle: "<<area<<endl;

}
int main()
{
	int length,breadth;
	cout<<"Enter Length: "<<endl;
	cin>>length;
	cout<<"Enter Breadth: "<<endl;
	cin>>breadth;
	rectarea(length,breadth);
	return 0;
}
