#include <iostream>
using namespace std;
int main(){
	int sum=0;
	for(int i=1;i<101;i++){
		sum=i+sum;
	}
	cout<<sum<<endl;
}