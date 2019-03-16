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

    vector<string>V(N);
    rep(i,0,N)
    {
        cin>>V[i];
    }

    sort(V.begin(),V.end());

    string s1;
    rep1(i,N-1,-1)
    {
        s1+=V[i];
    }

    cout<<s1;


 return 0;
}
