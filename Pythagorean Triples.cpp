#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	cin>>a;
	if(a==1||a==2)cout<<"-1"<<endl,exit(0);
	if(a%2){
		b=(a*a-1)/2;
		cout<<b<<" "<<b+1<<endl;
	}
	else{
		b=a/2;
		b*=b;
		cout<<b-1<<" "<<b+1<<endl;
	}
}
