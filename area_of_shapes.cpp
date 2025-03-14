#include <iostream>
using namespace std;

double AOC(){
	double r;
	cout<<"Enter the value of radius: ";
	cin>>r;
	return 3.14*r*r;
}

double AOR(){
        double l, b;
        cout<<"Enter the value of length and breadth: ";
        cin>>l>>b;
        return l*b;
}


double AOS(){
        double a;
        cout<<"Enter the value of side: ";
        cin>>a;
        return a*a;
}
 
int main()
{
	int n;
  	cout<<"1. Area of Circle \n2. Area of Rectangle \n3. Area of Square \n4. Exit \n";
	cout<< " Enter your choice: ";
	cin>>n;
	switch(n){
		case 1:
			cout<<AOC()<<endl;
			break;
		case 2:
			cout<<AOR()<<endl;
			break;
		case 3:
			cout<<AOS()<<endl;
			break;
		default:
			exit(0);
		}
	return 0;
}
