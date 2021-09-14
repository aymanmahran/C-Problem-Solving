#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

	int a,b;
	float c,d;
	float v;
	cin>>a>>b>>c;
	v=b*c;
	b=("%.0f",v);
	cout<<"NUMBER = "<<a<<endl<<"SALARY = U$ "<<("%.2f",v);
	if(v-b==0){
	cout<<".00";	

	}
else if(v-b<1){
  
}

}
