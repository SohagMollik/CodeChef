#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       int x,y,k,l,lcm,gcd;
       cin>>x>>y;
        k=min(x,y);
        l=max(x,y);
        gcd=__gcd(k,l);
        lcm=(x*y)/gcd;
        cout<<gcd<<" "<<lcm<<endl;
    }
    return 0;
}
