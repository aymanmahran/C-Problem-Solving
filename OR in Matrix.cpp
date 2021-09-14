#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100][100],ans[100][100],flag,flag2,cnt,c;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
            flag=1;
            flag2=1;
        if(arr[i][j]==1){
            for(int k=0;k<y;k++){
                if(arr[i][k]==0){
                    flag=0;
                    break;
                }
            }
            for(int k=0;k<x;k++){
                if(arr[k][j]==0){
                    flag2=0;
                    break;
                }
            }
            if(flag==0&&flag2==0){
                cout<<"NO"<<endl;
                exit(0);
            }
            if(flag==1&&flag2==1){
                ans[i][j]=1;
                cnt+=x;
                cnt+=y;
                cnt-=1;
            }
            c++;
        }
    }
}
if(cnt>=c){
    cout<<"YES"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"NO"<<endl;
}
}
