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

    lli N,i;
    cin>>N;

    vector<lli>V(N);
    rep(i,0,N)
    {
        cin>>V[i];
    }

    if(N==1)
    {
        cout<<'1';
        exit(0);
    }

    sort(V.begin(),V.end());

    lli cnt=1,cnt1=1,Val;

    rep(i,1,N)
    {
        if(V[i]==V[i-1])
        {
            cnt1++;
            if(cnt1>cnt)
            {
                cnt=cnt1;
                Val=i;
            }
            if(cnt1>N/2)
            {
                cout<<"1";
                exit(0);
            }
        }
        else
        {
            cnt1=1;
        }
    }

    cout<<"0";


 return 0;
}
