#include <iostream>
using namespace std;

int main()
{
	int a,sum=0;
	cout<<"Please Enter Four Digit Numbers:"<<endl;
	cin>>a;
	if(a>1000 &&  a<9999)  //checking whether it's a four digit number or not 
	{
		while(a!=0)   // loop termination condition
		{
			int digit=a%10;  // getting the last digit
			sum=sum+digit;   // adding the last digit into the sum
			a=a/10; 	// Removing the last digit 
		}
		cout<<"sum:"<<sum<<endl; //Printing the final sum 
	}
	else
	{
		cout<<"Not four Digit Number";
	}
	 return 0;
}
