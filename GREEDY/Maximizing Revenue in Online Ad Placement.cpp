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

    li N,i;
    cin>>N;

    vector<lli>V(N);
    vector<lli>V1(N);

    rep(i,0,N)
    {
        cin>>V[i];
    }

    rep(i,0,N)
    {
        cin>>V1[i];
    }

    lli Value=0;

    sort(V.begin(),V.end());
    sort(V1.begin(),V1.end());

    rep(i,0,N)
    {
        Value+=V[i]*V1[i];
    }

    cout<<Value;


 return 0;
}
