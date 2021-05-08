#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n%4==0)cout<<n+1<<endl;
    else cout<<n-1<<endl;
    return 0;
}
