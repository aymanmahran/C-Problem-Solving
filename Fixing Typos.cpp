#include<bits/stdc++.h>
using namespace std;
string s;
char a;
int arr[200000],ind,arr2[200000],cnt,st;
bool flag;
int main(){
cin>>s;
a=s[0];
for(int i=0;i<s.size();i++){
    if(s[i]==a){
        arr[cnt]++;
    }
    else{
        cnt++;
        a=s[i];
        arr[cnt]++;
    }
}
for(int i=0;i<=cnt;i++){
        //cout<<arr[i]<<endl;
    if(arr[i]==1){
        flag=false;
        st++;
    }
    else if(arr[i]==2){
        if(flag){
            arr2[st]=1;
            flag=false;
            st+=2;
        }
        else{
            st+=2;
            flag=true;
        }
    }
    else{
        if(flag){
            for(int j=1;j<arr[i];j++){
                arr2[st]=1;
                st++;
            }
            flag=false;
            st++;
        }
        else{
            for(int j=2;j<arr[i];j++){
                arr2[st]=1;
                st++;
            }
            flag=true;
            st+=2;
        }
    }
}
for(int i=0;i<st;i++){
    if(!arr2[i])cout<<s[i];
}
cout<<endl;
}
