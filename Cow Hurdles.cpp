#include<vector>
#include<stdio.h>
using namespace std;
int x,y,z,a,b,c,cnt,dis[301][301];
int main(){
    for(int i=0;i<301;i++){
        for(int j=0;j<301;j++){
            dis[i][j]=1e9;
        }
    }
    scanf("%d%d%d",&x,&y,&z);
    for(int i=0;i<y;i++){
        scanf("%d%d%d",&a,&b,&c);
        dis[a][b]=c;
    }
    for(int i=0;i<=x;i++){
        for(int j=0;j<=x;j++){
            for(int k=0;k<=x;k++){
                dis[j][k]=min(dis[j][k],max(dis[j][i],dis[i][k]));
            }
        }
    }
    for(int i=0;i<z;i++){
        scanf("%d%d",&a,&b);
        if(dis[a][b]==1e9)dis[a][b]=-1;
        printf("%d\n",dis[a][b]);
    }
}
