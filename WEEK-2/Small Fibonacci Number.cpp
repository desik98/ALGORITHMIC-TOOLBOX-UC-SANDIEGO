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

    lli N,i;
    cin>>N;

    vector<lli>V;

    V.pb(0);
    V.pb(1);

    for(i=2;i<=N;i++)
    {
        V.pb(V[i-2]+V[i-1]);
    }

    cout<<V[N];


 return 0;
}
