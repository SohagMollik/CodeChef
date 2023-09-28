#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        bool ans=false;
        for(int i=2;i<st.size();++i){
            if((st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')&&(st[i-1]=='a' || st[i-1]=='e' || st[i-1]=='i' || st[i-1]=='o' || st[i-1]=='u')&&(st[i-2]=='a' || st[i-2]=='e' || st[i-2]=='i' || st[i-2]=='o' || st[i-2]=='u')){
                ans=true;
                break;
            }
        }
        if(ans==true)
        cout<<"Happy\n";
        else cout<<"Sad\n";
    }

    return 0;
}

