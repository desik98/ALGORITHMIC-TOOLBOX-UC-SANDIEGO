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

    lli N;
    cin>>N;

    lli i=1,j=1;

    vector<lli>V;
    while(N)
    {
        if(i*2<N)
        {
            V.pb(i);
            N-=i;
            i++;
        }
        else
        {
            V.pb(N);
            N=0;
        }
    }

    cout<<V.size();
    cout<<'\n';

    rep(i,0,V.size())
    {
        cout<<V[i]<<' ';
    }


 return 0;
}
