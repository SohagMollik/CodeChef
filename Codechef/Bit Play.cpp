/*
****************************************************************
    __author__ : Sohag Mollik

****************************************************************
*/

#include <bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n")
#define no   printf("NO\n")
using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string st;
        cin>>n>>st;

        ll sum=1;
        for(int i=2;i<n;i+=2){

            if(st[i]=='1'){
                if((st[i-1]=='1' && st[i-2]=='0') || (st[i-1]=='0' && st[i-2]=='1'))sum=(sum*2)%mod;
                else if(st[i-1]=='0' && st[i-2]=='0')sum=(sum*0)%mod;
                else if(st[i-1]=='1' && st[i-2]=='1')sum=(sum*2)%mod;
            }

            else{
                if(st[i-1]=='0' && st[i-2]=='0')sum=(sum*3)%mod;
               else if((st[i-1]=='1' && st[i-2]=='0') || (st[i-1]=='0' && st[i-2]=='1'))sum=(sum*1)%mod;
               else if(st[i-1]=='1' && st[i-2]=='1')sum=(sum*1)%mod;
            }
        }

        cout<<sum%mod<<nn;
    }



    return 0;
}
