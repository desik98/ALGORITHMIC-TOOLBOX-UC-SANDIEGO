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
    return (a.second<b.second);
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    lli N,i;
    cin>>N;

    vector< pair<lli,lli> >V(N);
    rep(i,0,N)
    {
        cin>>V[i].first>>V[i].second;
    }

    vector<lli>V1;

    sort(V.begin(),V.end(),sortbysec);

    lli Count=1;
    lli j=0;
    V1.pb(V[0].second);

    rep(i,1,N)
    {
        if(V[j].second<V[i].first)
        {
            Count++;
            j=i;

            V1.pb(V[j].second);
        }
    }

    cout<<V1.size()<<'\n';
    rep(i,0,V1.size())
    {
        cout<<V1[i]<<' ';
    }


 return 0;
}
