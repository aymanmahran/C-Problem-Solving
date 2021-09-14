#include <bits/stdc++.h>

using namespace std;

int nums[100005];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;++i){
			scanf("%d",&nums[i]);
		}
		long long int mini = 0;
		long long int maxsum = INT_MIN;
		long long int mincnt = 1;
		long long int rescnt = 0;
		long long int sum = 0;
		for(int i=0;i<n;++i){
			sum+= nums[i];
			if(sum - mini > maxsum){
				maxsum = sum-mini;
				rescnt = mincnt;
			}
			else if(sum -mini == maxsum){
				rescnt += mincnt;
			}
			if(sum< mini){
				mini = sum;
				mincnt = 0;
			}
			if(sum== mini){
				mincnt ++;
			}
		}
		cout<<maxsum<<" "<<rescnt<<endl;
	}
}
