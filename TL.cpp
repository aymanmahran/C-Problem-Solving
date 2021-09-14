#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,cnt=0;
cin>>x>>y;
int right[x],wrong[y];
for(int i=0;i<x;i++){
    cin>>right[i];
}
for(int i=0;i<y;i++){
    cin>>wrong[i];
}
sort(right,right+x);
sort(wrong,wrong+y);
int mini=right[x-1];
int maxi=wrong[0];
for(int i=mini;i<maxi;i++){
    if(((right[0])*2)<=mini){
        cout<<mini<<endl;
        exit(0);
    }
    else{
        mini++;
    }
}
cout<<"-1"<<endl;
}
