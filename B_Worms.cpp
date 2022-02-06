// https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;
int a[N];
int n;
int ans[N];
signed main() {
    
    cin>>n;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int j=1;
     int sm=0;
     for(int i=1;i<n;i++){
          a[i]=a[i-1]+a[i];
     }
     int q;
     cin>>q;
     while(q--){
        int x;
        cin>>x;
         int lo=0,hi=n-1,mid;
         while(hi-lo>1){
             mid=(lo+hi)/2;
            if(x<=a[mid]){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }
        if(a[lo]+1>x){
            cout<<lo+1<<endl;
        }else{
            cout<<hi+1<<endl;
        }
     }


}
