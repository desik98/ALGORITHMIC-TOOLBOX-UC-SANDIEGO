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

bool sortbysec(const pair<lli,lli> &a,const pair<lli,lli> &b)
{
    return (a.second>b.second);
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    lli N;
    cin>>N;

    vector<lli>V(N);
    rep(i,0,N)
    {
        cin>>V[i].first>>V[i].second;
    }

    sort(V.begin(),V.end(),sortbysec);


 return 0;
}
