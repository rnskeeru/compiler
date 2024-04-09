// C++ program to add two number 
// using addition operator 
#include <iostream> 
using namespace std; 

// Function to return sum 
// of two number 
int addTwoNumber(int A, int B) 
{ 
	// Return sum of A and B 
	return A + B; 
} 

// Driver Code 
int main() 
{ 
	// Given two number 
	int a,b;
  cin>>a>>b;

	// Function call 
	cout << "sum = " << addTwoNumber(a,b); 
	return 0; 
}
