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

lli dp[1000001];
lli V[1000001];

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
    opt1;
    opt2;
    opt3;

    lli N,i;
    cin>>N;

    vector<lli>V1;
    dp[1]=0;
    V[1]=0;

    rep(i,2,N+1)
    {
        dp[i]=dp[i-1]+1;
        V[i]=i-1;

        if(i%2==0)
        {
            if(dp[i/2]+1<dp[i])
            {
                dp[i]=dp[i/2]+1;
                V[i]=i/2;
            }
        }

        if(i%3==0)
        {
            if(dp[i/3]+1<dp[i])
            {
                dp[i]=dp[i/3]+1;
                V[i]=i/3;
            }
        }
    }

    cout<<dp[N];
    nl;

    i=N;

    while(i)
    {
        V1.pb(i);
        i=V[i];
    }

    repr(i,V1.sz()-1,-1)
    {
        cout<<V1[i]<<' ';
    }




 return 0;
}
