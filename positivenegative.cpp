#include <iostream>
using namespace std;
int main(){
	cout<<"enter a number"<<endl;
	int num;
	cin>>num;
	if(num>0)
	{
		cout<<"positive"<<endl;
		
	}
	else if(num==0){
		cout<<"neither positive nor negative"<<endl;
		
	}
	else{
		cout<<"negative"<<endl;
	}
}