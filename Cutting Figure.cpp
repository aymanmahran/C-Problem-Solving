#include<bits/stdc++.h>
using namespace std;
int x,y,f,cnt,ans=1e9,v[51][51],s,e;
char c[55][55];
bool flag;
void tot(int a,int b){
    //cout<<a<<" "<<b<<endl;
if(c[a][b]=='.'||a<0||b<0||a==x||b==y||v[a][b])return;
v[a][b]=1;
tot(a+1,b);
tot(a,b+1);
tot(a-1,b);
tot(a,b-1);
return;
}
int main(){
    cin>>x>>y;
   // for(int i=0;i<=y;i++)c[0][i]='#';
    for(int i=0;i<x;i++){
        //c[i][0]='#';
        for(int j=0;j<y;j++){
            cin>>c[i][j];
            if(c[i][j]=='#')f++;
        }
       // c[i][y+1]='#';
    }
   // for(int i=0;i<=y;i++)c[x+1][i]='#';
    if((x==1&&y==1)||(x==1&&y==2)||(x==2&&y==1)||f<=2){
        cout<<"-1"<<endl;
        exit(0);
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(c[i][j]=='#'){
                c[i][j]='.';
                flag=true;
                s=-1;
                e=-1;
                for(int q=0;q<x;q++){
                    for(int h=0;h<y;h++){
                        if(c[q][h]=='#'){
                            s=q;
                            e=h;
                            break;
                        }
                    }
                    if(s!=-1)break;
                }
                //c[i][j]='#';
                tot(s,e);
                for(int a=0;a<x;a++){
                    for(int b=0;b<y;b++){
                        if(c[a][b]=='#'&&!v[a][b]){
                               // cout<<i<<" "<<j<<endl;
                            cout<<"1"<<endl;
                            exit(0);
                        }
                        v[a][b]=0;
                    }
                }
                c[i][j]='#';
            }
        }
    }
    cout<<"2"<<endl;
}
