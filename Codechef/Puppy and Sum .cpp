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
        int d,n,sum;
        cin>>d>>n;
        while(d--){
            sum=n*(n+1)/2;
            n=sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
