#include<bits/stdc++.h>
using namespace std;
int x,y,g;
string s[50];
bool flag;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>s[i];
}
//cout<<endl;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
            if(s[i][j]=='B'){
        for(int k=0;k<x;k++){
            for(int l=0;l<y;l++){
                    flag=false;
                if(s[k][l]=='B'){
                    for(int n=min(i,k);n<=max(i,k);n++){
                       // cout<<n<<" "<<j<<" "<<s[n][j]<<endl;
                        if(s[n][j]=='W'){
                            flag=true;
                            break;
                        }
                    }
                    //cout<<endl;
                    if(!flag){
                        for(int n=min(j,l);n<=max(j,l);n++){
                        if(s[k][n]=='W'){
                            flag=true;
                            break;
                        }
                      }
                    if(flag){
                        cout<<"NO"<<endl;
                        exit(0);
                    }
                    }
                    else{
                            flag=false;
                        for(int n=min(j,l);n<=max(j,l);n++){
//cout<<i<<" "<<n<<" "<<s[i][n]<<endl;
                        if(s[i][n]=='W'){
                            flag=true;
                            break;
                        }
                    }
                    //cout<<endl;
                    if(!flag){
                        for(int n=min(i,k);n<=max(i,k);n++){
                        if(s[n][l]=='W'){
                            flag=true;
                            break;
                        }
                      }
                    if(flag){
                        cout<<"NO"<<endl;
                        exit(0);
                    }
                    }
                    else{
                        cout<<"NO"<<endl;
                        exit(0);
                    }
                    }
                }
            }
        }
    }
  }
}
cout<<"YES"<<endl;
}
