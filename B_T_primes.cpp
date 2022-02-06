#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;
bool prime[N];
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[1]=false;
    for(int i=2 ; i*i<=1000000 ; i++)
    {
        if(prime[i])
        {
            for(int j=i*i ; j<=1000000 ; j+=i) prime[j]=false;
        }
    }
}

 
signed main() {
     
    int n;
     cin>>n;
     sieve();
      while(n--){
          int x;
          cin>>x;
        int d;
        d=sqrt(x);
        //cout<<d<<endl;
        if(d*d!=x||x==1){
           cout<<"NO"<<endl;
        }else{
            // cout<<prime[d]<<endl;
             if(prime[d]==true){
                 cout<<"YES"<<endl;
             }else{
                 cout<<"NO"<<endl;
             }
        }

      }

}

