#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,c=0;
    cin>>n>>k;
    while(n--){
        ll a;
        cin>>a;
        if(a%k==0){
            c++;
        }
    }
    cout<<c<<endl;

}
