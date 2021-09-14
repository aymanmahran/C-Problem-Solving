#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
   char c;
   int a=0;
  while(a==0){
  	cin>>c;
		x+=c;
		if(c=='}'){
			a++;
		}
	}
	for(int i=0;i<x.size();i++){
			x.erase(x.begin()+i);
			if(x=="}"){
				x.erase(x.begin()+0);
			}
			cout<<x<<endl;
	}

	for(int i=0;i<x.size();i++){
	 for(int v=0;v<x.size();v++){
	 	if(i!=v){
	 		if(x[i]==x[v]){
	 		  	x.erase(x.begin()+v);
	 		  	v--;
			 }
		 }
	}
	}
	cout<<x.size()<<endl;
}
