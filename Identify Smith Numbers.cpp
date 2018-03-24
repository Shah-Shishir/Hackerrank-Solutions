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
const int MAX = 50000;

vector <int> v;
bool prime[MAX];

void sieve ()
{
    int i,j;

    v.pb(2);
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

int sDig (int n)
{
    int sum=0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int sDigPF (int n)
{
    int i,sum=0;

    for (i=0; v[i]*v[i]<=n; i++)
    {
        while (n % v[i] == 0)
        {
            sum += sDig (v[i]);
            n /= v[i];
        }
    }

    if (n > 1)
        sum += sDig (n);

    return sum;
}

bool isSmith (int n)
{
    if (sDig(n) == sDigPF(n))
        return true;
    else
        return false;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    sieve ();

    int n;

    while (sf ("%d",&n) != EOF)
        pf ("%d\n",isSmith(n));

    return 0;
}
