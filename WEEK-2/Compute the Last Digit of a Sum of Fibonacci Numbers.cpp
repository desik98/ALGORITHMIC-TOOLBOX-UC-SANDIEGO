#include<bits/stdc++.h>
#define lli long long
#define li long
#define I int
#define pb push_back
#define mp make_pair
#define M1 1e9+7
#define rep(i,a,b) for(i=a;i<b;i++)
#define rep1(i,a,b) for(i=a;i>b;i--)
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);

    lli M,N,i;
    cin>>N;

    vector<lli>V;

    V.pb(0);
    V.pb(1);

    rep(i,2,61)
    {
        V.pb((V[i-1]+V[i-2])%10);
    }

    lli Sum=1;

    for(i=2;i<=60;i++)
    {
        V[i]=(V[i-1]+V[i-2])%10;
        Sum+=V[i];
    }

    lli Sum1=0;

    for(i=0;i<=N%60;i++)
    {
        Sum1=(Sum1+V[i]%10)%10;
    }

    cout<<Sum1;


 return 0;
}
