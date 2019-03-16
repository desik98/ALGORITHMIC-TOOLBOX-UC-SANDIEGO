/*I MAY NOT GET THE SUCCESS IMMEDIATELY BUT I WILL GET IT FOR SURE*/
#include<bits/stdc++.h>
#define opt1 std::ios_base::sync_with_stdio(false)
#define opt2 cin.tie(0)
#define opt3 cout.tie(0)
#define I int
#define li		int32_t
#define lli		long long
#define ulli unsigned long long

#define pn			printf("\n")
#define nl			cout<<'\n'

#define rep(i,a,b)	for(i=a;i<b;i++)
#define repr(i,a,b)	for(i=a;i>b;i--)
#define elif		else if
#define mset(a,b)	memset(a,b,sizeof(a))

#define pb		push_back
#define pob		pop_back
#define itr		iterator
#define sz()	size()
#define szof    sizeof
#define lb		lower_bound
#define ub		upper_bound
#define mp		make_pair
#define pii		pair<int,int>
#define pll		pair<li,li>
#define vpi		vector<pii >
#define vpl		vector<pll >
#define F		first
#define S		second

#define mod		1000000007
using namespace std;

lli dp[100001];

lli Minimum_Steps(lli N)
{
    if(N==1)
    {
        return 0;
    }

    if(dp[N]!=-1)
    {
        return dp[N];
    }

    lli r=Minimum_Steps(N-1)+1;

    if(N%2==0)
    r=min(Minimum_Steps(N/2)+1,r);

    if(N%3==0)
    r=min(Minimum_Steps(N/3)+1,r);

return (dp[N]=r);
}

int main()
{
    opt1;
    opt2;
    opt3;

    lli N;
    cin>>N;

    memset(dp,-1,szof(dp));

    cout<<Minimum_Steps(N);



 return 0;
}
