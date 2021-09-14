#include<bits/stdc++.h>
using namespace std;
int x,y,arr[1000],arr2[1000],cnt;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
    arr2[i]=arr[i];
}
sort(arr2,arr2+x,greater<int>());
cout<<arr2[y-1]<<endl;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        if(arr[i]==arr2[j]){
            cout<<i+1<<" ";
            cnt++;
            break;
        }
    }
    if(cnt==y)break;
}
cout<<endl;
}
