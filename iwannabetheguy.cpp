#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,x=0,z=0;
cin>>a>>b;
int lev1[b],arr[a];
for(int i=0;i<b;i++){
    cin>>lev1[i];
}
cin>>c;
int lev2[c];
for(int i=0;i<c;i++){
    cin>>lev2[i];
}
for(int i=0;i<a;i++){
    arr[i]=0;
}
for(int i=0;i<b;i++){
        for(int j=1;j<=a;j++){
            if(lev1[i]==j){
                arr[x]++;
            }
            x++;
        }
    x=0;
}
x=0;
for(int i=0;i<c;i++){
        for(int j=1;j<=a;j++){
            if(lev2[i]==j){
                arr[x]++;
            }
            x++;
        }
 x=0;
}
for(int i=0;i<a;i++){
    if(arr[i]==0){
        z++;
    }
}
if(z==0){
    cout<<"I become the guy."<<endl;
}
else{
    cout<< "Oh, my keyboard!"<<endl;
}
}
