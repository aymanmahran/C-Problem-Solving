#include<bits/stdc++.h>
using namespace std;
int n,t,arr[50],cnt;
char s[50];
int main(){
cin>>n>>t;
for(int i=0;i<n;i++){
    cin>>s[i];
    if(s[i]=='B'){
        arr[cnt]=i;
        cnt++;
    }
}
for(int i=0;i<t;i++){
    for(int j=0;j<cnt;j++){
            if(arr[j]!=n-1){
                if(s[arr[j]+1]!='B'){
        swap(s[arr[j]],s[arr[j]+1]);
        arr[j]=arr[j]+1;
            }
            }
    }
}
cout<<s<<endl;
}
