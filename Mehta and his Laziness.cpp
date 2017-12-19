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

bool isSq (int n)
{
    if (n & 1)
        return false;

    double r = sqrt(double(n));

    if (r-(int)(r) == 0)
        return true;
    else
        return false;
}

int gcd (int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd (b,a % b);
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,pos,n,i,a,b,g;
    double res;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d",&n);

        a = b = 0;

        for (i=1; i*i<=n; i++)
        {
            if (n % i == 0)
            {
                if (isSq(i))
                    ++b;

                if (i*i == n)
                    a++;
                else
                {
                    if ((n/i) == n)
                        a++;
                    else
                    {
                        a+=2;

                        if (isSq(n/i))
                            ++b;
                    }
                }
            }
        }

        g = gcd (a,b);
        a /= g;
        b /= g;
        res = b/double(a);

        if (res == 0)
            pf ("0\n");
        else
            pf ("%d/%d\n",b,a);
    }

    return 0;
}
