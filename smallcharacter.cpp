#include <iostream>
using namespace std;

void check_upper_lower_alphabet(int b, char a)
{
	if(b>=97 &&  b<=122)
	{
		cout<<a<<" is a Lowercase Alphabet"<<endl;
	}
	else if(b>=65 && b<=90)
	{
		cout<<a<<" is a Uppercase Alphabet"<<endl;
	}
	else
	{
		cout<<" Invalid character"<<endl;
	}
}
int main()
{
	char a;
	cout<<"Enter a character : ";
	cin>>a;
	int b;
	b=a;
	check_upper_lower_alphabet(b,a);
	
	return 0;
}
