#include<iostream>
using namespace std;

int func(int x){
	if(x == 1){
		return 1;
	}
	else 
		return x*func(x-1);
}
int main(){
	
	cout << "enter the number you wanna find factorial of \n" ;
	int n;
	cin >> n;
	cout << "The factorial is " << func(n);
	
	
}