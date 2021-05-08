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
        string s;
        cin>>s;
        if(s[0]=='B'||s[0]=='b')cout<<"BattleShip\n";
        if(s[0]=='C'||s[0]=='c')cout<<"Cruiser\n";
        if(s[0]=='D'||s[0]=='d')cout<<"Destroyer\n";
        if(s[0]=='F'||s[0]=='f')cout<<"Frigate\n";
    }
    return 0;
}
