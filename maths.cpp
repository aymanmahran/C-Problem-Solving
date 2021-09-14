#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int arr[(s.size()/2)+1],cnt=0;
for(int i=0;i<s.size();i+=2){
    arr[cnt]=s[i]-'0';
    cnt++;

}
sort(arr,arr+cnt);
for(int i=0;i<cnt;i++){
    if(i==(s.size()/2)){
        cout<<arr[i];
    }
    else{
        cout<<arr[i]<<"+";
    }
}
cout<<endl;
}
