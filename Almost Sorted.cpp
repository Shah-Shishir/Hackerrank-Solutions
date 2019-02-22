/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_jombe_besh   int main (void)
#define jitsen_bhai		return 0
#define sf                  	scanf
#define pf                  	printf
#define ssf                 	sscanf
#define spf                 	sprintf
#define fsf                 	fscanf
#define fpf                 	fprintf
#define fast                	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               	sf ("%d",&tc)
#define sn                  	sf ("%d",&n)
#define whilecase           	while (tc--)
#define eof                 	while (cin >> n)
#define forloop             	for (pos=1; pos<=tc; pos++)
#define arrayloop           	for (i=0; i<n; i++)
#define cinstr              	cin >> str
#define getstr              	getline (cin,str)
#define pcase               	pf ("Case %d: ",pos)
#define vi                  	vector <int>
#define si                  	set <int>
#define vs                  	vector <string>
#define pii                 	pair <int,int>
#define mii                 	map <int,int>
#define pb                  	push_back
#define in                  	insert
#define llu                 	unsigned long long
#define lld                 	long long
#define U                   	unsigned int
#define endl                	"\n"

const int MOD = 1000000007;
const int MAX = 100005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int arr[MAX];

ebar_khela_jombe_besh
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,j,a,b,k,p;

    while (cin >> n)
    {
        for (i=0; i<n; i++)
            cin >> arr[i];

        a = b = -1;
        p = k = 0;

        vi v;

        for (i=0; i<n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                a = i;
                ++k;
                v.pb(a);

                for (j=i+1; j<n-1; j++)
                {
                    if (arr[j] > arr[j+1])
                    {
                        ++k;
                        b = j+1;
                    }
                    else
                    {
                        p = 1;
                        break;
                    }
                }

                i = j;
            }
        }

        if (a > -1 && b == -1)
            b = a+1;

        if (a == -1 && b == -1)
            pf ("yes");
        else
        {
            if (k == b-v[0])
                reverse (arr+v[0],arr+b+1);
            else
                swap (arr[v[0]],arr[b]);

            p = 1;

            for (i=0; i<n-1; i++)
            {
                if (arr[i] > arr[i+1])
                {
                    p = 0;
                    pf ("no");
                    break;
                }
            }

            if (p)
            {
                pf ("yes\n");

                if (b-v[0] == k && k > 1)
                    pf ("reverse");
                else
                    pf ("swap");

                pf (" %d %d",v[0]+1,b+1);
            }
        }

        pf ("\n");

        v.clear();
    }

    jitsen_bhai;
}
