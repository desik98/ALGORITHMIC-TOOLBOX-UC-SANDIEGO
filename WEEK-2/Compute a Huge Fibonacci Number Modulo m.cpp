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

    lli N,M,i;
    cin>>N>>M;

    vector<lli>V;

    V.pb(0);
    V.pb(1);

    int flag=1;
    rep(i,2,N+1)
    {
        V.pb((V[i-1]%M+V[i-2]%M)%M);

        if(!V[i-2] && !V[i-1])
        {
            flag=0;
            break;
        }
    }

    if(flag)
    cout<<V[N];
    else
    cout<<'0';

 return 0;
}
