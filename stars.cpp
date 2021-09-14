#include<iostream>
using namespace std;
int main(){
	int in=0;
	int no=0;
	int up=1;
	cin>>in;
	cout<<endl;
	no=in;
	for(int j=0 ;j<in ;j++){
		
		for(int i=0;i<no;i++){
			cout<<" ";
	    
		}
		for(int i=0;i<up;i++){
			cout<<"*";
	    
		}
		cout<<endl;
			no--;
			up=up+2;
	}
}

