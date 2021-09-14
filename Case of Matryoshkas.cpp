#include<bits/stdc++.h>
using namespace std;
int x,y,a,b[100000],dnt,s;
bool flag;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>a;
    for(int j=0;j<a;j++){
        cin>>b[j];
    }
    flag=false;
    for(int j=0;j<a-1;j++){
        if((b[j]+1)!=b[j+1]){
            //cout<<i<<" "<<flag<<" "<<s<<endl;
            if(flag&&s!=1){
                flag=false;
                dnt+=(a-1);
                break;
            }
            else{
                flag=false;
            dnt+=(a-(j+1));
            break;
            }
            break;
        }
        else if((b[j]+1)==b[j+1]&&!flag){
            s=b[j];
            flag=true;
        }
    }
    if(flag){
        flag=false;
        if(s!=1){
            dnt+=(a-1);
        }
    }
}
dnt*=2;
dnt+=y;
cout<<dnt-1<<endl;
}
