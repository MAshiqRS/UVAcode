#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,res=0,tens=0;
    scanf("%d",&t);
    for (int i=1; i<=t;i++)
        {
            scanf("%d",&n);
            res=n*567/9+7492;
            res=res*235/47-498;
            tens=res/10;
            tens=tens%10;
            if(tens<0)
                {
                    printf("%d\n",-tens);
                }
            else
                {
                    printf("%d\n",tens);
                }


        }

    return 0;
}
