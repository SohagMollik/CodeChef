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
        int n,k;
        cin>>n>>k;

        vector<int>v(n);

        for(int i=0;i<n/2;++i){
            v[i]=1;
        }

        for(int i=n/2;i<n;++i){
            v[i]=2;
        }

//        for(int i=0;i<n;++i){
//            cout<<v[i]<<" ";
//        }
//        cout<<nn;

        int y=(3*n)/2;
        if(y>k)cout<<-1<<nn;
        else{
            int rem=k-y;
            if(rem%2!=0)cout<<-1<<nn;
            else{
                for(int i=0;i<n;++i){
                    v[i]+=min(rem,99998);
                    rem-=min(rem,99998);
                }

                if(rem!=0)cout<<-1<<nn;
                else{
                    for(int i=0;i<n;++i){
                        cout<<v[i]<<" ";
                    }
                    cout<<nn;
                }
            }
        }
    }


    return 0;
}
