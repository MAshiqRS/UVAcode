#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a,b,c;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a>b)
        {
            if(b>c)
                {
                    if(a>c)
                        {
                            printf("Case %d: %d\n",i,b);
                        }
                    else
                        {
                            printf("Case %d: %d\n",i,c);
                        }
                }
            else
                {
                    if(a>c)
                        {
                            printf("Case %d: %d\n",i,c);
                        }
                    else
                        {
                            printf("Case %d: %d\n",i,a);
                        }
                }
        }
        else
            {
                if(b>c)
                    {
                        if(a>c)
                            {
                                printf("Case %d: %d\n",i,a);
                            }
                        else
                            {
                                printf("Case %d: %d\n",i,c);
                            }
                    }
                else
                    {
                        if(a>b)
                            {
                                printf("Case %d: %d\n",i,a);
                            }
                        else
                            {
                                printf("Case %d: %d\n",i,b);
                            }
                    }
            }
    }
    return 0;
}
