/*I MAY NOT GET THE SUCCESS IMMEDIATELY BUT I WILL GET IT FOR SURE*/
#include<bits/stdc++.h>
#define opt std::ios_base::sync_with_stdio(false)
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

lli dp[10001][301];
vector<lli>weight;

lli Recursive_Weight(lli W,lli N)
{
    if(!W && !N)
    {
        return 0;
    }

    if(dp[W][N])
    {
        return dp[W][N];
    }

    lli i;

    lli Maximum=0;
    lli Val=Recursive_Weight(W,N-1);

    if(weight[N-1]<=W)
    {
        Val=max(Recursive_Weight(W-weight[N-1],N-1)+weight[N-1],Val);
    }

 return(dp[W][N]=Val);
}

lli Power(lli a,lli b)
{
    lli result=1;

    while(b)
    {
        if(b%2)
        {
            result=(result*a)%mod;
        }

        b=b>>1;
        a=(a*a)%mod;
    }

 return result;
}

int main()
{
    opt;

    lli W,i;
    cin>>W;

    lli N;
    cin>>N;

    rep(i,0,N)
    {
        lli Number;
        cin>>Number;

        if(Number<=W)
        {
            weight.pb(Number);
        }
    }

    N=weight.sz();

    cout<<Recursive_Weight(W,N);




 return 0;
}
