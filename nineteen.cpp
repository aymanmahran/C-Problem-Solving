#include<bits/stdc++.h>
using namespace std;
string s;
int arr[4],ans;
int main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='n')arr[0]++;
    if(s[i]=='i')arr[1]++;
    if(s[i]=='e')arr[2]++;
    if(s[i]=='t')arr[3]++;
}
if(arr[0]>2&&arr[1]>0&&arr[2]>2&&arr[3]>0){
    arr[0]-=3;
    arr[1]-=1;
    arr[2]-=3;
    arr[3]-=1;
    ans++;

    arr[0]/=2;
    arr[2]/=3;
    sort(arr,arr+4);
    ans+=arr[0];
    cout<<ans<<endl;

}
else{
    cout<<"0"<<endl;
}
}
