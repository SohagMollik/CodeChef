#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d,k;
        cin>>n>>k>>d;
        int sum=0;
        while(n--){
            int x;
            cin>>x;
            sum+=x;
        }
        int div=sum/k;
        cout<<min(div,d)<<endl;
    }
}
