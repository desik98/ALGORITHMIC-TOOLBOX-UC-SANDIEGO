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

vector<lli>Coins(51);
lli dp[251];
lli N;

lli RecursiveChange(lli Money,lli N)
{
    if(!Money)
    {
        return 0;
    }

    if(dp[Money]+1)
    {
        return dp[Money];
    }

    lli Min_Num_Coins=1000000000,i;
    rep(i,0,N)
    {
        if(Money>=Coins[i])
        {
            Min_Num_Coins=min(Min_Num_Coins,RecursiveChange(Money-Coins[i],N)+1);
        }
    }


 return (dp[Money]=Min_Num_Coins);
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

    lli Money;
    cin>>Money;

    lli i;
    cin>>N;

    rep(i,0,N)
    {
        cin>>Coins[i];
    }

    memset(dp,-1,szof(dp));

    cout<<RecursiveChange(Money,N);




 return 0;
}
