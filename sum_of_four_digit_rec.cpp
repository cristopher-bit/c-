#include <iostream>
using namespace std;

int fourdigitrec(int n)
{       int sum =0;	
	if (n==0)   // Base condition for recursion
	
	{
		return 0;
	}

	return (n%10) + fourdigitrec(n/10);   // calculating the sum of four digit number

}	
int main()
{
	int n;
	cout<<"Enter a four digit number: ";
	cin>>n;     // taking input from the user
	if(n>1000 && n<9999)   //checking whether it a four digit number or not 
	{

		cout<<fourdigitrec(n)<<endl;   // if yes call function fourdigitrec
	}
	else
	{
		cout<<"Not a four Digit number"<<endl;
	}
	return 0;

}

Recursion Concept

The function fourdigitrec(int n) calls itself repeatedly, reducing the number by removing the last digit (n / 10) in each step.
The base condition (if (n == 0) return 0;) ensures the recursion stops when all digits have been processed.
Functionality

The program prompts the user to enter a four-digit number.
It checks whether the input is valid (between 1000 and 9999).
If valid, it calls the recursive function to compute the sum of its digits.
If invalid, it displays an error message.
Mathematical Process

The recursion extracts the last digit using n % 10 and adds it to the sum of the remaining digits (n / 10).
Example: For 1234
1234 % 10 = 4 → Remaining: 123
123 % 10 = 3 → Remaining: 12
12 % 10 = 2 → Remaining: 1
1 % 10 = 1 → Remaining: 0 (Base case)
