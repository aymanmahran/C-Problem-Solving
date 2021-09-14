#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int dif=10001,puzzle[y];
for(int i=0;i<y;i++){
    cin>>puzzle[i];
}
sort(puzzle,puzzle+y,greater<int>());
for(int i=0;i<y-(x-1);i++){
    for(int j=i+(x-1);j<y;j++){
        dif=min(dif,puzzle[i]-puzzle[j]);
    }
}
cout<<dif<<endl;

}


