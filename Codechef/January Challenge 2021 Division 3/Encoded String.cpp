#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[100005],s1[100005]={0};
        cin>>s;
        int k=0;
       for(int i=0;i<strlen(s);i+=4){
        if(s[i]=='0'){
            if(s[i+1]=='0'){
                if(s[i+2]=='0'){
                    if(s[i+3]=='0'){
                        s1[k++]='a';
                    }
                    else{
                        s1[k++]='b';
                    }
                }
                else{
                  if(s[i+3]=='0'){
                        s1[k++]='c';
                    }
                    else{
                        s1[k++]='d';
                    }
                }
            }
            else{
               if(s[i+2]=='0'){
                    if(s[i+3]=='0'){
                        s1[k++]='e';
                    }
                    else{
                        s1[k++]='f';
                    }
                }
                else{
                  if(s[i+3]=='0'){
                        s1[k++]='g';
                    }
                    else{
                        s1[k++]='h';
                    }
                }
            }

        }
        else{
            if(s[i+1]=='0'){
                if(s[i+2]=='0'){
                    if(s[i+3]=='0'){
                        s1[k++]='i';
                    }
                    else{
                        s1[k++]='j';
                    }
                }
                else{
                  if(s[i+3]=='0'){
                        s1[k++]='k';
                    }
                    else{
                        s1[k++]='l';
                    }
                }
            }
            else{
               if(s[i+2]=='0'){
                    if(s[i+3]=='0'){
                        s1[k++]='m';
                    }
                    else{
                        s1[k++]='n';
                    }
                }
                else{
                  if(s[i+3]=='0'){
                        s1[k++]='o';
                    }
                    else{
                        s1[k++]='p';
                    }
                }
            }
        }

       }
       for(int x=0;x<strlen(s1);x++)
       cout<<s1[x];

    }
    cout<<endl;
}
