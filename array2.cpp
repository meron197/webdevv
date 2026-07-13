# include <iostream>
using namespace std;
int main(){
int marks[5];
int larg;
int sum=0;

for(int i =0;i<5;i++){
	cout<<"enter mark"<<i+1<<endl;
	cin>>marks[i];
	sum=sum+marks[i];
}	
double ave = sum / 5.0;
for(int u=0;u<marks[5];u++){
	if( marks[u]>larg){
		larg=marks[u];
	}
}
cout<<"the smallest numbers are"<<endl;
for(int l=1;l<5;l++){
	if(marks[l]!=larg){
		
		cout<<marks[l]<<" ";
	}
}
cout<<endl;
cout<<"the sum is "<<sum<<"the average is "<<ave<<"the laregest number is "<<larg<<endl;


}