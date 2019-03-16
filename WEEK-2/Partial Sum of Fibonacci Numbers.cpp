#include<bits/stdc++.h>
#define lli long long
#define li long
#define I int
#define pb push_back
#define mp make_pair
#define M2 1e9+7
#define rep(i,a,b) for(i=a;i<b;i++)
#define rep1(i,a,b) for(i=a;i>b;i--)
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);

    lli M,N,i;
    cin>>M>>N;

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

    lli M1=M+(60-M%60);
    lli N1=N-N%60;
    lli N2=(N1-M1)/60;


    if(N2>=1)
    {
        Sum1=((Sum%10)*(N2%10))%10;

        cout<<Sum1<<' ';

        for(i=M;i<=M1;i++)
        {
            Sum1=(Sum1+V[i%60]%10)%10;
        }

        for(i=N1;i>=N;i--)
        {
            Sum1=(Sum1+V[i%60]%10)%10;
        }
    }
    else
    {
        for(i=M;i<=N;i++)
        {
            Sum1=(Sum1%10+V[i%60]%10)%10;
        }
    }

    cout<<Sum1;


 return 0;
}
