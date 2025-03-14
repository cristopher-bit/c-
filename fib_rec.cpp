#include <iostream>
using namespace std;

int fibrec(int n)
{
	if(n==0 || n==1)
	{
		return (n);
	}
	return fibrec(n-1)+ fibrec(n-2);

}

int main()
{
	int n;
	cout<<"Enter number of term of the series: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<fibrec(i)<<endl;
	}
	return 0;
}	

1. Fibonacci Series Concept
The Fibonacci series is a sequence of numbers where each term (starting from the third term) is the sum of the two preceding ones. Mathematically, it is defined as:

𝐹
(
𝑛
)
=
{
0
,
if 
𝑛
=
0
1
,
if 
𝑛
=
1
𝐹
(
𝑛
−
1
)
+
𝐹
(
𝑛
−
2
)
,
if 
𝑛
≥
2
F(n)= 
⎩
⎨
⎧
​
  
0,
1,
F(n−1)+F(n−2),
​
  
if n=0
if n=1
if n≥2
​
 
For example, the first few terms of the Fibonacci sequence are:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...

2. Recursion in Fibonacci Calculation
The function fibrec(n) is designed to calculate the Fibonacci number for a given index n using recursion.

Base Case:
If n is 0 or 1, the function returns n directly.
Recursive Case:
If n ≥ 2, the function calls itself for the previous two terms (fibrec(n-1) and fibrec(n-2)) and adds their results.
This recursive approach breaks down the problem into smaller subproblems until it reaches the base case.

3. Execution Flow in Main Function
The program prompts the user to enter the number of terms (n) they want to generate.
A loop runs from 0 to n-1, calling fibrec(i) each time to compute the Fibonacci number for index i.
The computed Fibonacci numbers are printed one by one.
4. Time Complexity Consideration
The recursive approach has exponential time complexity 
𝑂
(
2
𝑛
)
O(2 
n
 ) because each function call spawns two more recursive calls.
This makes it inefficient for large values of n.

To optimize, techniques like memoization (storing previously computed results) or an iterative approach can be used.