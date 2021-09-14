#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,ch[3001][3001],cnt,ans;
vector<int> arr[3001];
int main(){
    scanf("%d%d",&x,&y);
    for(int i=0;i<y;i++){
        scanf("%d%d",&a,&b);
        ch[a][b]=1;
        arr[a].push_back(b);
    }
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i!=j){
                cnt=0;
                for(int k=0;k<arr[i].size();k++){
                    if(arr[i][k]!=j&&ch[arr[i][k]][j])cnt++;
                }
                ans+=(cnt*(cnt-1)/2);
            }
        }
    }
    cout<<ans<<endl;
}
