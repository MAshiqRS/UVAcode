#include <bits/stdc++.h>

using namespace std;
int x,y;
int sum(int a)
{
    if(a<=9)
    {
        return a;
    }
    else
    {
        x=a;
        x=a%10;
        y=a/10;
        a=x+y;
        return sum(a);

    }
}


int main() {
	int n;
	while(cin>>n)
	{
	    if(n==0)
        {
            break;
        }
        else
        {
            cout<<sum(n)<<endl;
        }
	}

	return 0;
}
