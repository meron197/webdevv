# include <iostream>
using namespace std;
int main(){
int marks[5];
for(int i =0;i<5;i++){
	cout<<"enter mark"<<i+1<<endl;
	cin>>marks[i];
}	
cout<<"the marks are"<<endl;
for(int u=0;u<5;u++){
	cout<<marks[u]<<" "<<endl;;
}
cout<<"mark"<<marks[3];
}