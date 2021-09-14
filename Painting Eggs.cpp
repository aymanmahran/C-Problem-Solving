#include<bits/stdc++.h>
using namespace std;
long long x,a[1000000],b[1000000],f,s,sum,arr[1000000];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    scanf("%d",&a[i]);
    scanf("%d",&b[i]);
}
valarray<long long>v(a,x);
f=v.sum();
for(int i=0;i<x;i++){
    if(abs(f-s)<=500){
        break;
    }
    else if(abs(f-s)>500){
        f-=a[i];
        s+=b[i];
        arr[i]=1;
    }
}
if(abs(f-s)<=500){
    for(int i=0;i<x;i++){
        if(arr[i]==0)printf("A");
        else printf("G");
    }
}
else{
    cout<<"-1";
}
cout<<"\n";
}
