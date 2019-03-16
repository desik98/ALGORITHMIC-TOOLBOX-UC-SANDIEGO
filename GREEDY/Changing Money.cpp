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

    lli m;
    cin>>m;

    lli  Number=0;
    Number+=m/10;
    m%=10;

    Number+=m/5;
    m%=5;

    Number+=m;

    cout<<Number;

 return 0;
}
