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
        int n,ans=0;
        cin>>n;
        //while(n!=0){
           int x=n/100;
           ans+=x;
           n=n%100;
           int z=n/50;
           ans+=z;
           n=n%50;
           int y=n/10;
           ans+=y;
           n=n%10;
           int q=n/5;
           ans+=q;
           n=n%5;
           int p=n/2;
           ans+=p;
           n=n%2;
           int r=n/1;
           ans+=r;

        //}
        cout<<ans<<endl;
    }
    return 0;
}
