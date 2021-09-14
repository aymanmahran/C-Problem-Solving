#include<bits/stdc++.h>
using namespace std;
long long x,y,s,e,z;
map<long long,long long>t,l,r;
int main(){
cin>>x>>y>>s>>e;
for(int i=0;i<y;i++){
    cin>>z;
    t[z]=z;
    cin>>l[z]>>r[z];
}
if(s>e){
    for(long long i=1;i<=1000000000;i++){
        if(s==e){
            break;
        }
        if(t[i]==0){
            cout<<"L";
            s--;
        }
        else{
            if((s>=l[i]&&s<=r[i])||(s-1>=l[i]&&s-1<=r[i])){
                cout<<"X";
            }
            else{
                cout<<"L";
                s--;
            }
        }
    }
}
else{
    for(long long i=1;i<=1000000000;i++){
        if(s==e){
            break;
        }
        if(t[i]==0){
            cout<<"R";
            s++;
        }
        else{
            if((s>=l[i]&&s<=r[i])||(s+1>=l[i]&&s+1<=r[i])){
                cout<<"X";
            }
            else{
                cout<<"R";
                s++;
            }
        }
    }
}
cout<<endl;
}
