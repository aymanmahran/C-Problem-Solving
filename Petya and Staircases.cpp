#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[3000],k;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>arr[i];
}
sort(arr,arr+y);
if(arr[0]==1||arr[y-1]==x){
    cout<<"NO"<<endl;
    exit(0);
}
for(int i=0;i<y-2;i++){
    if(arr[i]==(arr[i+1]-1)&&arr[i+1]==(arr[i+2]-1)){
        cout<<"NO"<<endl;
        exit(0);
    }
}
cout<<"YES"<<endl;
}
