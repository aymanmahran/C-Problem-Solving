#include<bits/stdc++.h>
using namespace std;
int x,y,f[5000],s[5000],out[100],cnt;
bool flag;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>f[i]>>s[i];
}
while(true){
        flag=false;
        int arr[101]={0};
    for(int i=0;i<y;i++){
        arr[f[i]]++;
        arr[s[i]]++;
        out[f[i]]=i;
        out[s[i]]=i;
    }
    for(int i=1;i<=x;i++){
        if(arr[i]==1){
          f[out[i]]=0;
          s[out[i]]=0;
          flag=true;
        }
    }
if(flag)cnt++;

else break;

}
cout<<cnt<<endl;
}
