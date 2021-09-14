#include<bits/stdc++.h>
using namespace std;
char c;
string a,b,x;
int main(){
x="6789TJQKA";
cin>>c>>a>>b;
if(a[1]==c&&b[1]!=c){
    cout<<"YES"<<endl;
}
else if(b[1]==c&&a[1]!=c){
    cout<<"NO"<<endl;
}
else if(a[1]==b[1]){
    int fir=x.find(a[0]);
    int sec=x.find(b[0]);
    if(fir>sec){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else if(a[1]!=c&&b[1]!=c&&a[1]!=b[1]){
    cout<<"NO"<<endl;
}
}
