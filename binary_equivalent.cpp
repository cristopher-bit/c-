#include <iostream>
using namespace std;

int binary_equivalent(int n){
	if(n==0){
		return 0;}
	else{
		return (n%2) +10*binary_equivalent(n/2);

}
}
int main(){
	int n;
	cout<<"Enter a  numbers ";
	cin>>n;
	int final_value=binary_equivalent(n); 
	cout<< final_value<<endl;
	return 0;
}

Binary Conversion Concept:

A decimal number is converted to binary by repeatedly dividing by 2 and recording remainders.
The binary number is formed by reading the remainders in reverse order.
Recursive Function (binary_equivalent(int n))

Base Case: If n == 0, return 0.
Recursive Case:
(n % 2): Extracts the last binary digit.
10 * binary_equivalent(n / 2): Recursively processes the remaining digits while shifting left.
Execution in main()

The user enters a decimal number.
The function binary_equivalent(n) is called to compute its binary equivalent.
The result is displayed.
Example Execution (For n = 13)

Step-by-step recursive calls:
scss
Copy
Edit
binary_equivalent(13) → 1 + 10 * binary_equivalent(6)
binary_equivalent(6) → 0 + 10 * binary_equivalent(3)
binary_equivalent(3) → 1 + 10 * binary_equivalent(1)
binary_equivalent(1) → 1 + 10 * binary_equivalent(0)
binary_equivalent(0) → 0 (base case)
Final Output: 1101 (Binary of 13)