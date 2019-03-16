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
    opt1;opt2;opt3;

    lli N,i,j;
    cin>>N;

    vector<lli>V(N);
    rep(i,0,N)
    {
        cin>>V[i];
    }

    vector<lli>dp(N);

    rep(i,0,N)
    {
        dp[i]=1;
        rep(j,0,i)
        {
            if(V[j]<V[i])
            {
                dp[i]=max(dp[j]+1,dp[i]);
            }
        }
    }

    cout<<*max_element(dp.begin(),dp.end());


 return 0;
}
