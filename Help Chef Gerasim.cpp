#include<bits/stdc++.h>
using namespace std;
int x,arr[1000],y,arr2[1000],ind,ind1,sum,cnt;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    arr2[i]=arr[i];
    sum+=arr[i];
}
sort(arr,arr+x);
if(arr[0]==arr[x-1]){
    cout<<"Exemplary pages."<<endl;
}
else{
        if(sum%x!=0){
            cout<<"Unrecoverable configuration."<<endl;
        }
        else{
        y=sum/x;
    for(int i=0;i<x;i++){
        if(arr2[i]!=y){
            ind=i+1;
            swap(ind,ind1);
            cnt++;
        }
        if(cnt>2){
            cout<<"Unrecoverable configuration."<<endl;
            exit(0);
        }
    }
    if(arr2[ind-1]>arr2[ind1-1]){
        swap(ind,ind1);
    }
    cout<<arr2[ind1-1]-y<<" ml. from cup #"<<ind<<" to cup #"<<ind1<<"."<<endl;
}
}
}
