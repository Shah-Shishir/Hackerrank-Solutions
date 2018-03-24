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
    int len,k,i;

    while (sf ("%d\n%s\n%d",&len,str,&k) != EOF)
    {
        k = k % 26;

        map <char,char> mp;

        for (char ch='a'; ch<='z'-k; ch++)
            mp[ch] = ch+k;

        char x = 'a';

        for (char ch='z'-k+1; ch<='z'; ch++)
            mp[ch] = x++;

        for (char ch='A'; ch<='Z'-k; ch++)
            mp[ch] = ch+k;

        x = 'A';

        for (char ch='Z'-k+1; ch<='Z'; ch++)
            mp[ch] = x++;

        for (i=0; i<len; i++)
        {
            if (mp.find(str[i]) == mp.end())
                pf ("%c",str[i]);
            else
                pf ("%c",mp[str[i]]);
        }

        pf ("\n");

        mp.clear();
    }

    return 0;
}
