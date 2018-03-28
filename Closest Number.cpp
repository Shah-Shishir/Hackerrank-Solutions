/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int power (int n, int p)
{
    string bin;

    while (p)
    {
        if (p & 1)
            bin += "1";
        else
            bin += "0";

        p >>= 1;
    }

    reverse (bin.begin(),bin.end());

    int i,res=1;

    for (i=0; bin[i]; i++)
    {
        res *= res;

        if (bin[i] == '1')
            res *= n;
    }

    return res;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,a,b,x,p,d,v1,v2;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d %d %d",&a,&b,&x);

        if (b == 0)
        {
            if (x == 1)
                pf ("1\n");
            else
                pf ("0\n");
        }
        else if (b < 0)
        {
            if (a == 1)
            {
                if (x == 1)
                    pf ("1\n");
                else
                    pf ("0\n");
            }
            else
                pf ("0\n");
        }
        else
        {
            p = power (a,b);

            if (p % x == 0)
                pf ("%d\n",p);
            else
            {
                d = p/x;
                v1 = d*x;
                v2 = (d+1)*x;

                if ((v2-p) < (p-v1))
                    pf ("%d\n",v2);
                else if ((v2-p) > (p-v1))
                    pf ("%d\n",v1);
                else
                    pf ("%d\n",v1>v2?v2:v1);
            }
        }
    }

    return 0;
}
