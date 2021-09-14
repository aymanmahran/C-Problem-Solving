#include<bits/stdc++.h>
using namespace std;
int main()
{
char r[111][111];
	int n,x=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>r[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		{
			int t=0;
			if(r[i+1][j]=='o'){
                    t++;
			}
			if(r[i][j+1]=='o'){
                    t++;
			}
			if(r[i-1][j]=='o'){
                    t++;
			}
			if(r[i][j-1]=='o'){
                    t++;
			}
			if(t%2==1){
                    x=1;
			}
		}
	}
	if(x==1){
            cout<<"NO"<<endl;
	}
	else{
            cout<<"YES"<<endl;
	}
}

