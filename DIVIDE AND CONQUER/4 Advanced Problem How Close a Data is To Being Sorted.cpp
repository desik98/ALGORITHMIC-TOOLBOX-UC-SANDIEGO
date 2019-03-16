#include<bits/stdc++.h>
#define I int
#define li long
#define lli long long
#define uli unsigned long
#define ulli unsigned long long
#define pb push_back
#define mp make_pair
#define M 1000000007
#define rep(i,a,b) for(i=a;i<b;i++)
using namespace std;

lli Inversions;

lli b[100000];

void MERGE(lli* a,li low,li mid,li high)
{
    li i=low,j=low,k=mid+1,l;

    while(j<=mid && k<=high)
    {
        if(a[j]<=a[k])
        {
            b[i]=a[j];
            j++;
        }
        else
        {
            b[i]=a[k];
            k++;

            Inversions+=(mid-j+1);
        }

        i++;
    }

    if(j>mid)
    {
        for(l=k;l<=high;l++)
        {
            b[i]=a[l];
            i++;
        }
    }
    else
    {
        for(l=j;l<=mid;l++)
        {
            b[i]=a[l];
            i++;
        }
    }

    for(l=low;l<=high;l++)
    {
        a[l]=b[l];
    }
}

void MERGESORT(lli* a,li p,li r)
{
    li mid;

    if(p<r)
    {
        mid=(p+r)/2;

        MERGESORT(a,p,mid);
        MERGESORT(a,mid+1,r);
        MERGE(a,p,mid,r);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    Inversions=0;
    li N,i;
    cin>>N;

    lli a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }

    li p=0,r=N-1;

    MERGESORT(a,p,r);

    cout<<Inversions;


 return 0;
}
