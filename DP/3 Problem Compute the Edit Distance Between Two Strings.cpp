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

lli dp[2001][2001];

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
        string s1,s2;
        cin>>s1>>s2;

        lli K;
        cin>>K;

        lli N,M,i,j;
        N=s1.length();
        M=s2.length();

        memset(dp,0,szof(dp));

        rep(i,0,M+1)
        {
            dp[0][i]=i;
        }

        rep(i,0,N+1)
        {
            dp[i][0]=i;
        }

        rep(i,1,N+1)
        {
            rep(j,1,M+1)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
            }
        }

        if(dp[N][M]>K)
        {
            cout<<"TO ERR TOO MUCH IS DEVIL";
        }
        else
        {
            cout<<"TO ERR IS HUMAN";
        }

        nl;
    }


 return 0;
}
