#include<bits/stdc++.h>
using namespace std;
int x,y,n,px[100001],py[100001];
int a[2001][2001],d,s,ans;
bool flag;
struct tot{
int arr[2001];
};
map< pair <int,int> ,tot > c;
int main(){
cin>>x>>y>>n;
for(int i=0;i<n;i++){
    cin>>px[i]>>py[i];
}
cout<<endl;
for(int i=0;i<n;i++){
        ans=1e9;
    for(int j=px[i];j>0;j--){
            int f=c[make_pair(px[i],py[i])].arr[j];
        if((abs(f)+(px[i]-j)<=ans)&&(f+py[i]>0)&&(f+py[i]<=y)&&!a[j][py[i]+f]){
            ans=abs(f)+(px[i]-j);
            d=j;
            s=py[i]+f;
    cout<<px[i]<<" "<<py[i]<<" "<<d<<" "<<s<<endl;
        }
    }
        for(int j=px[i]+1;j<=x;j++){
            int f=c[make_pair(px[i],py[i])].arr[j];
        if((abs(f)+(j-px[i])<ans)&&(f+py[i]>0)&&(f+py[i]<=y)&&!a[j][py[i]+f]){
            ans=abs(f)+(j-px[i]);
            d=j;
            s=py[i]+f;
            cout<<px[i]<<" "<<py[i]<<" "<<d<<" "<<s<<endl;
        }
    }
    if(c[make_pair(px[i],py[i])].arr[d]>0){
        c[make_pair(px[i],py[i])].arr[d]++;
    }
    else{
        c[make_pair(px[i],py[i])].arr[d]--;
        if(c[make_pair(px[i],py[i])].arr[d]+py[i]<=0){
            c[make_pair(px[i],py[i])].arr[d]=1;
        }
    }
    a[d][s]=1;
    cout<<d<<" "<<s<<endl<<endl;
  }
}
