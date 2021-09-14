#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    int flag=0;
string a,b,c,d;
cin>>a>>b>>c>>d;
int arr[4]={0},cnt=0,dnt=0;
arr[0]=a.size()-2,arr[1]=b.size()-2,arr[2]=c.size()-2,arr[3]=d.size()-2;
for(int i=0;i<4;i++){
    cnt=0;
    dnt=0;
    for(int v=0;v<4;v++){
        if(i!=v){
            if(arr[i]<=arr[v]/2){
                cnt++;
            }
            else if(arr[i]>=arr[v]*2){
                dnt++;
            }
        }
    }
    if(cnt==3||dnt==3){
        x=i+65;
       flag++;
    }

}
if(flag==1)cout<<x<<endl;
else cout<<"C"<<endl;
}
