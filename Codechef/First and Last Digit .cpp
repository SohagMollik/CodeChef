#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum;
        int l=s.length();
        sum=(s[0]-'0')+(s[l-1]-'0');
        cout<<sum<<endl;
    }
}
