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

lli dp[100001][9];
lli Coin[8]={1,2,5,10,20,50,100,200};

lli RecursiveChange(lli Money,lli N)
{
    if(Money<0)
    {
        return 0;
    }

    if(!Money)
    {
        return 1;
    }

    if(N<=0 && Money>=1)
    {
        return 0;
    }

    if(dp[Money][N])
    {
        return dp[Money][N];
    }

        dp[Money][N]=(RecursiveChange(Money-Coin[N-1],N)+RecursiveChange(Money,N-1))%mod;

    return (dp[Money][N]);
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

    lli T;
    cin>>T;

    while(T--)
    {
        lli Money,N=8,i;
        cin>>Money;

        cout<<RecursiveChange(Money,N);
        nl;
    }


 return 0;
}
