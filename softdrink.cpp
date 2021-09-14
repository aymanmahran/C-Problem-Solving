#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
long long w[3];
w[0]=k*l;
w[0]/=nl;
 w[1]=c*d;
 w[2]=p/np;
 sort(w,w+3);
cout<<w[0]/n<<endl;
}
