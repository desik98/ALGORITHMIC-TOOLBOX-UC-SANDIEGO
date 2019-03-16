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

bool sortbydiv(const pair<double,double> a,const pair<double,double> b)
{
    return (a.first/a.second)>(b.first/b.second);
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    lli N,i;
    cin>>N;

    double W;
    cin>>W;

    vector<double>V1(N);
    vector<double>V2(N);

    vector< pair<double,double> >V(N);

    rep(i,0,N)
    {
        cin>>V1[i];
    }

    rep(i,0,N)
    {
        cin>>V2[i];
    }

    /*rep(i,0,N)
    {
        V[i].first=V2[i];
        V[i].second=V1[i];
    }

    sort(V.begin(),V.end(),sortbydiv);

    /*
    i=0;
    int flag=1;

    double Value=0.0;
    while(i<N && flag)
    {
        if(V[i].second<=W)
        {
            Value+=V[i].first;
            W-=V[i].second;

            i++;
        }
        else
        {
            Value+=(V[i].first*W)/(V[i].second);

            W=0;
            flag=0;
        }
    }

    cout<<fixed<<setprecision(2)<<Value;
    */


 return 0;
}
