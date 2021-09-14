#include<bits/stdc++.h>
using namespace std;
string s;
int arr[123],cnt,o,ans;
int main(){
cin>>s;
for(int i=0;i<s.size();i++){
    int h=static_cast<int>(s[i]);
    arr[h]++;
}
for(int i=97;i<123;i++){
        if(arr[i]%2==1){
            o++;
        }
}
if(o>1){
    ans+=o;
    ans-=1;
}
if(ans%2==0){
    cout<<"First"<<endl;
}
else{
    cout<<"Second"<<endl;
}
}
