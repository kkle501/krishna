#include <bits/stdc++.h>
using namespace std;
int Krishna(int x,long long signed int n)
{
    bool prime[x]; 
    memset(prime, true, sizeof(prime));
 
    for (long long signed int p = 2; p * p <= x; p++)    
    {
        if (prime[p] == true) 
        {
            for (long long signed int i = p * p; i <= x; i += p)
                prime[i] = false;
        }
    }
    int res;
    for (long long signed int p = 2; p <= x; p++)
        if (prime[p])
            {
                if(n%p==0)   //if number is divisble by prime number than update with 
                res=p;        //latest value of prime number
            }
            return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<Krishna(1,13195);    
    return 0;
}