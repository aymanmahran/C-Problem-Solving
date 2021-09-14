#include<bits/stdc++.h>
using namespace std;
long long x,y,a[100002],b[100002],fa[10000001],fb[10000001],d,n=1,m=1,p[10000001];
int main(){
    scanf("%I64d%I64d",&x,&y);
    for(int i=0;i<x;i++){
        scanf("%I64d",&a[i]);
    }
    for(int i=0;i<y;i++){
        scanf("%I64d",&b[i]);
    }
    /*for(int i=0;i<x;i++){
        while(a[i]%2==0){
            a[i]>>=1;
            fa[2]++;
        }
        for(int j=3;j*j<=a[i];j+=2){
            while(a[i]%j==0){
                a[i]/=j;
                fa[j]++;
            }
        }
        if(a[i]>2)fa[a[i]]++;
    }
    for(int i=0;i<y;i++){
        while(b[i]%2==0){
            b[i]>>=1;
            fb[2]++;
        }
        for(int j=3;j*j<=b[i];j+=2){
            while(b[i]%j==0){
                b[i]/=j;
                fb[j]++;
            }
        }
        if(b[i]>2)fb[b[i]]++;
    }*/
    for(int i=2;i<=10000000;i++){
        if(!p[i]){
            for(int j=i;j<=10000000;j+=i){
                p[j]=i;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=a[i];j>1;j/=p[j]){
            fa[p[j]]++;
        }
    }
    for(int i=0;i<y;i++){
        for(int j=b[i];j>1;j/=p[j]){
            fb[p[j]]++;
        }
    }
    printf("%I64d %I64d\n",x,y);
    for(int i=0;i<x;i++){
		int ans=1;
		for(int j=a[i];j>1;j/=p[j])
			fb[p[j]] ? fb[p[j]]-- : ans*= p[j];
		printf(i==x-1 ? "%d\n" : "%d ", ans);
	}
	for(int i=0;i<y;i++){
		int ans=1;
		for(int j=b[i];j>1;j/=p[j])
			fa[p[j]] ? fa[p[j]]-- : ans*= p[j];
		printf(i==y-1 ? "%d\n" : "%d ", ans);
	}
}
