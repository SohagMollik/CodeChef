#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int odd=0,even=0;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
            if(a[i]%2!=0)odd++;
            else even++;
        }
        if(odd%2==0 && even==0)printf("YES\n");
       else if(even==odd)printf("YES\n");
        else if(odd==0)printf("NO\n");
        else if(odd>even)
        {
            if((odd-1)%2!=0)
            printf("YES\n");
            else printf("NO\n");
        }
        else {
             if((odd-1)%2!=0)
             printf("YES\n");
              else  printf("NO\n");
        }

    }
    return 0;
}
