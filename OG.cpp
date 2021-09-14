#include<bits/stdc++.h>
using namespace std;
int main(){
int son,daughter,sum[10001];
for(int i=0;i<10001;i++){
        sum[i]=0;
}
for(int i=0;i<10001;i++){
        cin>>son>>daughter;
        if(son==0 && daughter==0){
            break;
        }
        else{
            sum[i]=son+daughter;
        }
        son=0;
        daughter=0;
}
int cnt=0;
for(int i=0;i<10001;i++){
    if(sum[i]!=0){
        cnt++;
    }
}
for(int i=0;i<cnt;i++){
    if(i==cnt-1){
        cout<<sum[i];
    }
    else{
        cout<<sum[i]<<endl;
    }
}
}
