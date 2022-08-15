#include<iostream>
#include<ctime>
#include<numeric>
#include<tuple>
#include<iomanip>
#include<cstdlib>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<cmath>
#include<cstdio>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<cstring>
#include<deque>
#include<set>
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long int i,j,k,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<n<<" "<<endl;
        }
        else if(!n==1)
        {
            for(i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    k=1;
                    break;
                }
            }
            if (k==1)
            {
                out << n << " ";
            }
            else if (!k==0)
            {
                cout << n << " ";
            }
        }
    }
    return 0;
}