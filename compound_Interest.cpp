#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double P, R, CI, A;
	int n;
	cout<<"Enter the principle: ";
	cin>> P;
	cout<<"Enter the rate (%): ";
	cin>>R;
	R=R/100;
	cout<<"Enter the number of years(n): ";
	cin>>n;

	CI= P*(pow((1+R),n))-P;
	cout<<"Copound Intersest: "<<CI<<endl;
	return 0;
}

