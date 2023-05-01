#include <iostream>
using namespace std;

int fibronacci(int num){
	if(num <= 2) return 1;
	return fibronacci(num -1) +  fibronacci(num - 2);
}

int factorial(int n){
	if(n == 0) return 1;
	return factorial(n-1) * n;
}

int sum(int n){
	if(n == 0) return 0;
	return sum(n -1)  + n ;
}

int sort(int n){
	if(n < 10) return n;
	return (n/10) * 10 + (n % 10)
	
}


int main(){
	cout << "Fibronacci "  << fibronacci(10) << endl ;
	cout << "Factorial " <<  factorial(5) << endl ;	
	cout  << "Sum " << sum(10) << endl ;
	cout <<  "Sort " <<  sort(5664) << endl ;
	return 0;
}
