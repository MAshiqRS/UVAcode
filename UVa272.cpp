#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag=0;

    while(getline(cin, s))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='"')
            {
                if(flag==0)
                {
                    printf("``");
                    flag =1;
                }
                else
                {
                    printf("''");
                    flag=0;
                }
            }
            else
            {
                printf("%c", s[i]);

            }

        }
        printf("\n");
    }

    return 0;
}
