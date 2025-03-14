#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a,b,c,r1,r2;
	cout<<"Enter a,b,c : ";
	cin>>a>>b>>c;
	r1=(-b + sqrt(b*b-4*a*c))/2*a;
	r2=(-b - sqrt(b*b-4*a*c))/2*a;
	cout<<"Roots are : "<<r1<<" "<<r2<<endl;
	return 0;
}

b 
2
 −4ac is called the discriminant, which determines the nature of the roots:
If discriminant > 0, two distinct real roots exist.
If discriminant = 0, one real and equal root exists.
If discriminant < 0, complex (imaginary) roots exist.
Code Explanation:

Takes input values a, b, c from the user.
Computes the roots using the quadratic formula.
Uses sqrt() from <cmath> to calculate the square root.
Displays the computed roots.