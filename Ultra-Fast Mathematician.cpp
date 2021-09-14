#include<bits/stdc++.h>
using namespace std;
string x,y,z;
int main(){
cin>>x>>y;
for(int i=0;i<x.size();i++){
    if(x[i]==y[i])z+="0";
    else z+="1";
}
cout<<z<<endl;
}
