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
    int a,b;
    cin>>a>>b;
    if(a*b>2*(a+b))cout<<"Area\n"<<a*b<<endl;
    else if(a*b<2*(a+b))cout<<"Peri\n"<<2*(a+b)<<endl;
    else cout<<"Eq\n"<<a*b<<endl;
    return 0;
}
