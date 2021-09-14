#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"*";
	}
	cout<<endl;
	y=x-2;
	for(int z=0; z<y; z++){
		cout<<"*";
		for(int z=0; z<y; z++){
		cout<<" ";
		}
		cout<<"*"<<endl;
	}
    for(int p=0; p<x; p++){
		cout<<"*";	
}
}
