#include <iostream>
using namespace std;


int sum_of_numbers(int n)
{

	if (n==1)
	{
		return n;
	}
	return n + sum_of_numbers(n-1);
}
int main ()
{
	int n;
	cout<<"Enter the term till where you want the sum: ";
	cin>>n;
	cout<<"Sum of first "<<n<<" numbers is: "<<sum_of_numbers(n)<<endl;
	return 0;
}
