/// !(i love you) && !( i hate programming)
#include<bits/stdc++.h>

#define fread freopen("in.txt","r",stdin)
#define PI acos(-1)
#define ll long long

using namespace std;

int main()
{
    int n , i = 0;
    string s;
    cin>>n;
    cin>>s;
    while(s[i]!='\0')
    {
        int l = n;
        int t = (int)s[i]+l;
        if(t>90)
        {

            int x = abs((int)s[i]-90);
            l = l-x-1;
//            cout<<n<<endl<<x<<endl;
            s[i] = 'A'+l;
        }
        else
        s[i]+=l;
        i++;
    }
    cout<<s<<endl;
    return 0;
}

