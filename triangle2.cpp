#include<bits/stdc++.h>
using namespace std;
int x,xx,xxx,y,yy,yyy,i,cnt=0;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
string s[2];
void tot(int l,int w,int ll,int ww,int lll,int www){
int arr[3],a,b,c;
a=l-ll;
b=w-ww;
arr[0]=(a*a)+(b*b);
a=lll-ll;
b=www-ww;
arr[1]=(a*a)+(b*b);
a=l-lll;
b=w-www;
arr[2]=(a*a)+(b*b);
sort(arr,arr+3);
c=arr[0]+arr[1];
//cout<<l<<" "<<w<<" "<<ll<<" "<<ww<<" "<<lll<<" "<<www<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
if(c==arr[2]&&arr[0]!=0&&arr[1]!=0&&arr[2]!=0){
    cout<<s[i]<<endl;
    exit(0);
}
}
int main(){
s[0]="RIGHT";
s[1]="ALMOST";
cin>>x>>y>>xx>>yy>>xxx>>yyy;
tot(x,y,xx,yy,xxx,yyy);
i=1;
int k,j;
for(int i=0;i<4;i++){
    j=x+dx[i];
    k=y+dy[i];
    tot(j,k,xx,yy,xxx,yyy);

}
for(int i=0;i<4;i++){
    j=xx+dx[i];
    k=yy+dy[i];
    tot(x,y,j,k,xxx,yyy);
}
for(int i=0;i<4;i++){
    j=xxx+dx[i];
    k=yyy+dy[i];
    tot(x,y,xx,yy,j,k);
}
cout<<"NEITHER"<<endl;
}
