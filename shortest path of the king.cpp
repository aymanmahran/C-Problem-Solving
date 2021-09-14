#include <bits/stdc++.h>
using namespace std;
int main(){
	string x,y;
	cin>>x>>y;
	int w=fabs(x[0]-y[0]);
	int u=fabs(x[1]-y[1]);
	int h=max(w,u);
	cout<<h<<endl;
	while (x!=y){
		if (x[0]<y[0]){
                cout<<"R";
                x[0]++;
		}
		if (x[0]>y[0]){
                cout<<"L";
                x[0]--;
		}
		if (x[1]<y[1]){
                cout<<"U";
                x[1]++;
		}
		if (x[1]>y[1]){
                cout<<"D";
                x[1]--;
		}
		cout<<endl;
	}
}
