#include <iostream>
using namespace std;
int main(){
 int num;
cout << "enter a number" << endl;
cin >> num;
if (num%2==0){
	cout<<" this number is even"<<endl;
	
}
else if(num==0)
{
cout<<" this number is neither even nor odd"<<endl;
 
}
else {
	cout<<"the number is odd"<<endl;
}
return 0;
}