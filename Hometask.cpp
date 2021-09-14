#include<bits/stdc++.h>
using namespace std;
int x,arr[100000],sum,rem,r0[100000],r1[100000],r2[100000],a,b,c,d;
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    sum+=arr[i];
}
sort(arr,arr+x);
for(int i=0;i<x;i++){
    if(arr[i]%3==0){
        r0[a]=i;
        a++;
    }
    else if(arr[i]%3==1){
        r1[b]=i;
        b++;
    }
    else if(arr[i]%3==2){
        r2[c]=i;
        c++;
    }
}
if(arr[0]==0){
    if(sum%3==0){
        sort(arr,arr+x,greater<int>());
        for(int i=0;i<x-1;i++){
                if(arr[i]!=d){
            cout<<arr[i];
            d=1000000;
        }
        }
        cout<<"0"<<endl;
        exit(0);
    }
    else if(sum%3==1){
        if(b>=1){
            arr[r1[0]]=1000000;
        }
        else if(c>=2){
            arr[r2[0]]=1000000;
            arr[r2[1]]=1000000;
        }
        else{
            cout<<"-1"<<endl;
            exit(0);
        }
    }
    else if(sum%3==2){
        if(c>=1){
            arr[r2[0]]=1000000;
        }
        else if(b>=2){
            arr[r1[0]]=1000000;
            arr[r1[1]]=1000000;
        }
        else{
            cout<<"-1"<<endl;
            exit(0);
        }
    }
        sort(arr,arr+x,greater<int>());
    for(int i=0;i<x-1;i++){
        if(arr[i]!=1000000&&arr[i]!=d){
            cout<<arr[i];
            d=1000000;
        }
    }
        cout<<"0"<<endl;
}
else{
    cout<<"-1"<<endl;
}
}
