#include<bits/stdc++.h>
using namespace std;
int main(){
long long  s[5][5],row=0,col=0,dnt=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>s[i][j];
        if(s[i][j]==1){
            row=i;
            col=j;
        }
    }
}
if(s[2][2]==1){
    cout<<"0"<<endl;
}
else{
    if(row>2){
        while(row!=2){
            swap(s[row][col],s[row-1][col]);
            row--;
            dnt++;
        }
}
 if(row<2){
        while(row!=2){
            swap(s[row][col],s[row+1][col]);
            row++;
            dnt++;
        }
    }
     if(col>2){
        while(col!=2){
            swap(s[row][col],s[row][col-1]);
            col--;
            dnt++;
        }
    }
    if(col<2){
        while(col!=2){
            swap(s[row][col],s[row][col+1]);
            col++;
            dnt++;
        }
    }
    cout<<dnt<<endl;
}

}
