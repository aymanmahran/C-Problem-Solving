#include<bits/stdc++.h>
using namespace std;
long long arr[3],ans;
int main(){
cin>>arr[0]>>arr[1]>>arr[2];
sort(arr,arr+3);
ans=min(arr[1]+arr[0],(arr[0]+arr[1]+arr[2])/3);
cout<<ans<<endl;
}
