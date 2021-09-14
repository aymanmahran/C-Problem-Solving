#include<iostream>
using namespace std;
int main(){
	int x ,y;
	cout<<"input:"<<"";
	cin >>x>>y;
	
	if(x<y){
		cout<<x<<" is less than "<<y;
	}
	else if(x>y){
		cout<<x<<" is more than "<<y;
	}
	else if(x==y){
		cout<<x<<" is equal to "<<y;
	}
	
}
