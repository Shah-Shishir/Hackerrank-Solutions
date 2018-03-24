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

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    char str[101];
    int len,i,k;
    bool a,b,c,d;

    while (sf ("%d\n%s",&len,str) != EOF)
    {
        a = b = c = d = false;
        k = 0;

        for (i=0; i<len; i++)
        {
            if (isdigit(str[i]))
                a = true;
            else if (isupper(str[i]))
                b = true;
            else if (islower(str[i]))
                c = true;
            else if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '+')
                d = true;
        }

        if (!a)
            ++k;

        if (!b)
            ++k;

        if (!c)
            ++k;

        if (!d)
            ++k;

        if (len < 6)
            pf ("%d\n",max(6-len,k));
        else
            pf ("%d\n",k);
    }

    return 0;
}
