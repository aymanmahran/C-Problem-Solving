#include<bits/stdc++.h>
#define N 50
#define M 150
using namespace std;
char c[N][M];
int a[N][2];
int solve(int n,int m){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(c[i][j]=='1'){
				a[i][0]=j;
				if(!a[i][1])
	             a[i][1]=m-j-1;}
	i=0;
	while(i<n&&!a[i][0])
	i++;
	i++;
	for(;i<n;i++){
		a[i][0]=min(1+a[i-1][0]+2*a[i][0],m+a[i-1][1]);
		a[i][1]=min(1+a[i-1][1]+2*a[i][1],m+a[i-1][0]);
	}

	return a[n-1][0];

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++)
		for(int j=0;j<m+2;j++)
		cin>>c[i][j];

	cout<<solve(n,m+2)<<endl;
}
