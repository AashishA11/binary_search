// https://www.codechef.com/problems/MINEAT

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
int n,h;
       
int a[N];
bool possible(int k){
    int times=0;
    for(int i=0;i<n;i++){
        int d=a[i]/k;
        int r=a[i]%k;
        times+=d;
        if(r){
            times++;
        }
    }
    if(times<=h){
        return true;
    }else{
        return false;
    }
}  
signed main() {
    int t;
    cin>>t;
    while(t--){
       
       cin>>n>>h;
        
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       sort(a,a+n);
       int lo=1,hi=1e9,mid;
        while(hi-lo>1){
         mid=(hi+lo)/2;
         if(possible(mid)){
             hi=mid;
         }else{
             lo=mid+1;
         }
     }
     if(possible(lo)){
         cout<<lo<<endl;
     }else{
         cout<<hi<<endl;
     }
    }

}

