#include<bits/stdc++.h>
using namespace std;
int x,arr[200002],a,b,c,cnt,arr2[100001],f;
int main(){
cin>>x;
for(int i=x;i<x+x;i++){
    cin>>arr[i];
    arr2[c]=arr[i];
    c++;
}
sort(arr2,arr2+c);
c=0;
for(int i=x;i<x+x;i++){
            //cout<<arr[i]<<" "<<arr2[c]<<endl;
    if(arr[i]!=arr2[c]){
        f=1;
        break;
    }
    c++;
}
if(f==0){
    cout<<"0"<<endl;
    exit(0);
}
c=0;
a=x;
b=(x+x)-1;
for(int i=0;i<x;i++){
    if(arr[a]>=arr[b]){
        swap(arr[b],arr[a-1]);
        cnt++;
        a--;
        b--;
    }
    else{
        break;
    }
}
for(int i=a;i<=b;i++){
            //cout<<arr[i]<<" "<<arr2[c]<<endl;
    if(arr[i]!=arr2[c]){
        cout<<"-1"<<endl;
        exit(0);
    }
    c++;
}
cout<<cnt<<endl;
}
