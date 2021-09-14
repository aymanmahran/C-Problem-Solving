#include <iostream>
#include <cstdio>
#include <set>
#define rep(i,n) for (int i=1;i<=n;i++)
#define fr(i,s,e) for (int i=s;i<=e;i++)

using namespace std;

typedef long long ll;
int n,len,k,a[100005];
ll ans,sum;
multiset<int> curr,wait;

void init()
{
	scanf("%d%d",&n,&len);
	rep(i,n) scanf("%d",&a[i]);
	scanf("%d",&k);
}

void Ins(int x)
{
	if (curr.size()<k) curr.insert(x),sum-=x;
	else if (!k||x>=(*curr.rbegin())) wait.insert(x),sum+=x;
	else
	{
		int tmp=*curr.rbegin();
		sum+=2*tmp;sum-=x;
		curr.erase(--curr.end());
		curr.insert(x);
		wait.insert(tmp);
	}
}

void Del(int x)
{
	if (wait.find(x)!=wait.end()) wait.erase(wait.find(x)),sum-=x;
	else
	{
		int tmp=*curr.find(x);
		sum+=tmp;
		curr.erase(curr.find(x));
		if (wait.size())
		{
			sum-=2*(*wait.begin());
			curr.insert(*wait.begin());
			wait.erase(wait.begin());
		}
	}
}

ll pink()
{
	ll res=0;
	sum=0;
	curr.clear();
	wait.clear();
	rep(i,len) if (a[i]>=0) sum+=a[i];else Ins(a[i]);
	res=sum;
	fr(i,len+1,n)
	{
		if (a[i-len]>=0) sum-=a[i-len];else Del(a[i-len]);
		if (a[i]>=0) sum+=a[i];else Ins(a[i]);
		res=max(res,sum);
	}
	return res;
}

void dawn()
{
	ans=pink();
	rep(i,n) a[i]=-a[i];
	ans=max(ans,pink());
	cout<<ans<<endl;
}

int main()
{
	//freopen("1.txt","r",stdin);
	init();
	dawn();
	//while (1);
}
