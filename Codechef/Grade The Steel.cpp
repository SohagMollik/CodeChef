#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define mod   1000000007
#define pi    acos(-1.0)
#define yes   cout<<"YES\n";
#define no    cout<<"NO\n";
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
fast;
int t;
cin>>t;
while(t--){
    double h,c,s;
    cin>>h>>c>>s;
    if(h>50&&c<0.7&&s>5600)cout<<10<<endl;
    else if(h>50&&c<0.7)cout<<9<<endl;
    else if(c<0.7&&s>5600)cout<<8<<endl;
    else if(h>50&&s>5600)cout<<7<<endl;
    else if(h>50||c<0.7||s>5600)cout<<6<<endl;
    else cout<<5<<endl;
}

    return 0;
}
