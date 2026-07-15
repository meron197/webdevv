<<<<<<< HEAD
#include <iostream>
using namespace std;
int add (int a, int b){
	return a+b;
}
int substract (int a,int b){
	return a-b;
}
int multiply(int a,int b){
	return a*b;
}
int divide(int a,int b){
	return a/b;
}
int quotient(int a, int b){
	return (float) a / b;
	
}
int remainder( int a, int b){
	return a%b;
	
}
int main() {
	
	float n1,n2;
cout<<"enter the first number(fr division numenator)"<<endl;
	cin>>n1;
	cout<<"enter the second number(for division denomrator)"<<endl;
	cin>>n2;
	cout<<"n1+n2="<<add(n1,n2);
	cout<<"n1-n2="<<substract(n1,n2);
	cout<<"n1*n2="<<multiply(n1,n2);
	if (n2==0){
					cout<<"a number cannot divide by 0 so there is no qoutient and remainder"<<endl;
				}
			else{
			
			cout<<"n1/n2="<<divide(n1,n2)<<endl;
			cout<<"qoutient"<<quotient(n1, n2)<<endl;
			cout<<"remainder"<<remainder(n1, n2)<<endl;}
		}
=======
#include <iostream>
using namespace std;
int add (int a, int b){
	return a+b;
}
int substract (int a,int b){
	return a-b;
}
int multiply(int a,int b){
	return a*b;
}
int divide(int a,int b){
	return a/b;
}
int quotient(int a, int b){
	return (float) a / b;
	
}
int remainder( int a, int b){
	return a%b;
	
}
int main() {
	
	float n1,n2;
cout<<"enter the first number(fr division numenator)"<<endl;
	cin>>n1;
	cout<<"enter the second number(for division denomrator)"<<endl;
	cin>>n2;
	cout<<"n1+n2="<<add(n1,n2);
	cout<<"n1-n2="<<substract(n1,n2);
	cout<<"n1*n2="<<multiply(n1,n2);
	if (n2==0){
					cout<<"a number cannot divide by 0 so there is no qoutient and remainder"<<endl;
				}
			else{
			
			cout<<"n1/n2="<<divide(n1,n2)<<endl;
			cout<<"qoutient"<<quotient(n1, n2)<<endl;
			cout<<"remainder"<<remainder(n1, n2)<<endl;}
		}
>>>>>>> 718c43bd6e93afb2b8b47015f1cdb88add659c6f
			