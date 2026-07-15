#include <iostream>
using namespace std;
int main(){
	cout<<"enter the numbers"<<endl;
	int a,b,c,nu;
	cin>>a>>b>>c;
	if (a>b){
		 if(a>c){
		 	nu=a;
		 }
	
	}
	if (b>c){
	    if(b>a){
	    	nu=b;
		}
		
	}
	if(c>a){
		if(c>b){
			nu=c;
		}
	}
	cout<<"largest number is "<<nu<<endl;
	
}