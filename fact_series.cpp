#include <iostream>
using namespace std;

int fact(int n)
{
	if (n==1)
	{
		return n;
	}

	return n * fact(n-1);
}

int main()
{
	int n;
	cout<<"Enter the number of term for the sereis: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{

		cout<<fact(i)<<" ";
	}
	cout<<endl;
	return 0;
}

