#include<bits/stdc++.h>
using namespace std;
int main(){
string x;
cin>>x;
int j=0;
string y,s;
y[0]='h';
y[1]='e';
y[2]='l';
y[3]='l';
y[4]='o';
char c[5];
c[0]='1';
c[1]='2';
c[2]='3';
c[3]='4';
c[4]='5';
for(int i=0;i<x.size();i++){
    if(x[i]==y[j]){
        s+=c[j];
        j++;
    }
}
if(s=="12345"){
    cout<<"YES";
}
else{
    cout<<"NO";
}
cout<<endl;
}
