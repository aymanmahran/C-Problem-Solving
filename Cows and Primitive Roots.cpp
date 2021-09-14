#include<bits/stdc++.h>
using namespace std;
int64_t x,cnt,h,ans=0,flag=0;
int main()
{
cin>>x;
for(int i=1;i<x;i++){
        flag=0;
        h=1;
    for(int j=1;j<x;j++){
        h=(h*i)%x;
        if(h==1){
            flag++;
        }
    }
    if(flag==1)cnt++;
}
cout<<cnt<<endl;
}

