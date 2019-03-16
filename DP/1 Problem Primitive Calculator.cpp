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

vector<lli>V;
lli dp[1000001];

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

    lli r,r1=0,r2=100000000,r3=1000000000;
    lli Val;

    r1=Minimum_Steps(N-1)+1;

    if(N%2==0)
    {
        if(r>Minimum_Steps(N/2)+1)
        {
            r2=Minimum_Steps(N/2)+1;
        }
    }

    if(N%3==0)
    {
        if(r>Minimum_Steps(N/3)+1)
        {
            r3=Minimum_Steps(N/3)+1;
        }
    }

    r=min(r1,min(r2,r3));

    if(r==r1)
    {
        Val=N-1;
    }

    if(r==r2)
    {
        Val=N/2;
    }

    if(r==r3)
    {
        Val=N/3;
    }

    V.pb(Val);

    dp[N]=r;


 return dp[N];
}

int main()
{
    opt1;
    opt2;
    opt3;

    lli N,i;
    cin>>N;

    memset(dp,-1,szof(dp));

    cout<<Minimum_Steps(N);
    nl;

    rep(i,0,V.sz())
    {
        cout<<V[i]<<' ';
    }

 return 0;
}
