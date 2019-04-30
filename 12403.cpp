#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    getchar();
    string s;
    int d,sum=0;



    for(int i=0; i<t; i++)
    {
        cin >> s;
       
        
        if(s=="donate")
        {
	    scanf("%d",&d);
            sum=sum+d;
        }
        else
            {
                printf("%d\n",sum);

            }
    }

    return 0;
}
