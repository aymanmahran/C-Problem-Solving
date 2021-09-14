#include<bits/stdc++.h>
using namespace std;
int x,y,a[100000],b[100000],c[100000],done[100001],z;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>a[i]>>b[i]>>c[i];
}
for(int i=0;i<y;i++){
        if(done[a[i]]){
            z=done[a[i]];
            if(z==1){
                done[b[i]]=2;
                done[c[i]]=3;
            }
            else if(z==2){
                done[b[i]]=1;
                done[c[i]]=3;
            }
            else if(z==3){
                done[b[i]]=1;
                done[c[i]]=2;
            }
        }
        else if(done[b[i]]){
            z=done[b[i]];
            if(z==1){
                done[a[i]]=2;
                done[c[i]]=3;
            }
            else if(z==2){
                done[a[i]]=1;
                done[c[i]]=3;
            }
            else if(z==3){
                done[a[i]]=1;
                done[c[i]]=2;
            }
        }
        else if(done[c[i]]){
            z=done[c[i]];
            if(z==1){
                done[b[i]]=2;
                done[a[i]]=3;
            }
            else if(z==2){
                done[b[i]]=1;
                done[a[i]]=3;
            }
            else if(z==3){
                done[b[i]]=1;
                done[a[i]]=2;
            }
        }
        else{
            done[a[i]]=1;
            done[b[i]]=2;
            done[c[i]]=3;
        }
}
for(int i=1;i<=x;i++){
    cout<<done[i]<<" ";
}
cout<<endl;
}
