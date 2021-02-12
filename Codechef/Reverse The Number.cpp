#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int q=0;
        while(s!=0){
            int r=s%10;
             q=q*10+r;
             s/=10;

        }
        cout<<q<<endl;

    }
}
