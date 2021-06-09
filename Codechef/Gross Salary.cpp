#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        double  s;
        cin>>s;
        if(s<1500){
            double  hra = (s*0.10);
             double da= (s*0.90);
             double ans=s+hra+da;
             cout<<setprecision(2)<<fixed<<ans<<endl;
        }
        else if(s>=1500){
            double da=(s*0.98);
            double ans=s+500.00+da;
            cout<<setprecision(2)<<fixed<<ans<<endl;
        }
    }

    return 0;
}
