#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)cout<<"BIKE\n";
        else if(x>y)cout<<"CAR\n";
        else cout<<"SAME\n";
    }

    return 0;
}
