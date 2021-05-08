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
        string s,x;
    cin>>s;
    x=s;
    reverse(s.begin(),s.end());
    if(s.compare(x)==0)
        cout<<"wins\n";
    else cout<<"loses\n";
    }
    return 0;
}
