#include<bits/stdc++.h>
using namespace std;
int main(){
string x,y;
cin>>x>>y;
int arr[x.size()];
int brr[y.size()];
int pos=0,neg=0;
for(int i=0;i<x.size();i++){
    x[i]=tolower(x[i]);
    y[i]=tolower(y[i]);
}
for(int i=0;i<x.size();i++){
        arr[i]=x[i]-'A';
        brr[i]=y[i]-'A';
}
for(int i=0;i<x.size();i++){
    if(arr[i]>brr[i]){
        pos++;
        i=x.size();
    }
    else if(arr[i]<brr[i]){
        neg++;
        i=x.size();
    }
}
if(neg==pos){
    cout<<"0";
}
else if(pos==1){
    cout<<"1";
}
else if(neg==1){
    cout<<"-1";
}
cout<<endl;
}
