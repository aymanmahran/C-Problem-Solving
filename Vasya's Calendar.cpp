#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[2000],rem,ans;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>arr[i];
}
for(int i=0;i<y;i++){
    if(rem>0){
        ans+=rem;
    }
    rem=x-arr[i];
}
cout<<ans<<endl;
}
