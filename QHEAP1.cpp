#include <bits/stdc++.h>
using namespace std;

#define     sf     scanf
#define     pf     printf
#define     vi     vector <int>
#define     mii    map <int,int>

int main() {

    int tc,i,q,k;

    sf ("%d",&tc);

    mii mp;

    for (i=1; i<=tc; i++)
    {
        sf ("%d",&q);

        if (q == 1)
        {
            sf ("%d",&k);
            ++mp[k];
        }
        else if (q == 2)
        {
            sf ("%d",&k);
            --mp[k];

            if (mp[k] == 0)
                mp.erase(k);
        }
        else
        {
            mii :: iterator it = mp.begin();
            pf ("%d\n",it->first);
        }
    }

    mp.clear();

    return 0;
}
