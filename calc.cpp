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

int main() {
	int c;
	float n1,n2;
	cout<<"==============="<<endl;
	cout<<"simple calculator"<<endl;
	cout<<"==============="<<endl;
	cout<<"1.addition"<<endl;
	cout<<"2.substraction"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.division"<<endl;
	cout<<"5.exit"<<endl;
	cin>>c;

	cout<<"enter the first number(fr division denomenator)"<<endl;
	cin>>n1;
	cout<<"enter the second number(for division numerator)"<<endl;
	cin>>n2;
	
	
		switch (c){
			case 1:
			cout<<"n1+n2="<<add(n1,n2);
			break;
			case 2:
			cout<<"n1-n2="<<substract(n1,n2);
			break;
			case 3:
			cout<<"n1*n2="<<multiply(n1,n2);
			break;
			case 4:
				if (n2==0){
					cout<<"a number cannot divide by 0"<<endl;
				}
			else{
			
			cout<<"n1/n2="<<divide(n1,n2);}
			break;
			
			
			case 5:
			cout<<"quit";
			break;
			default:
			cout<<"you enterred the wrong number"<<endl;
			break;
		}
	}
	
	
	
	
	
	
 