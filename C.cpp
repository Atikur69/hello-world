/// !(i love you) && !( i hate programming)
#include<bits/stdc++.h>

#define fread freopen("in.txt","r",stdin)
#define PI acos(-1)
#define ll long long

using namespace std;


ll bin_ser(ll a, ll b, ll x)
{
    ll low = 0;
    ll high = 1000000001;
    ll mid = 0;
    int limit = 70;
    while(limit--)
    {
        mid  = (low+high)/2;
        ll sum = (a * mid) + (b * ((int)log10(mid)+1));
        if(sum>x)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return mid;
}

int main()
{
    ll a,b,x;
    cin>>a>>b>>x;
    cout<<bin_ser(a,b,x)<<endl;
    return 0;
}


