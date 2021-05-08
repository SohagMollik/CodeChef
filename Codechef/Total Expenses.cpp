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
     double q,p;
     cin>>q>>p;
     if(q>1000){
        double ans=q*p-(q*p*0.1);
        cout<<setprecision(6)<<fixed<<ans<<endl;
     }
     else cout<<setprecision(6)<<fixed<<p*q<<endl;
    }
    return 0;
}
