#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ns,count1=0,count2=0,res=0,j=1;
    while(1)
    {
        scanf("%d",&n);

        if(n==0)
        {
            break;
        }
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ns);
            if(ns==0)
            {
                count1++;
            }
            else
            {
                count2++;
            }


        }
        res=count2-count1;
        printf("Case %d: %d\n",j,res);
        j++;
        res=0,count1=0,count2=0;


    }

    return 0;
}
