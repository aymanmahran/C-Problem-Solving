#include<bits/stdc++.h>
using namespace std;
int r1,r2,c1,c2,d1,d2;
int main(){
cin>>r1>>r2>>c1>>c2>>d1>>d2;
for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
        if(i!=j){
            for(int k=1;k<=9;k++){
                if(k!=j&&k!=i){
                    for(int l=1;l<=9;l++){
                        if(l!=k&&l!=j&&l!=i){
                            if(i+j==r1&&k+l==r2&&i+k==c1&&j+l==c2&&i+l==d1&&j+k==d2){
                                cout<<i<<" "<<j<<endl<<k<<" "<<l<<endl;
                                exit(0);
                            }
                        }
                    }
                }
            }
        }
    }
}
cout<<"-1"<<endl;
}
