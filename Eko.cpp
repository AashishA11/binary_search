//  https://www.spoj.com/problems/EKO/

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;
int n;
int m;
int trees[N];

bool isWoodSufficient(int h){
          int wood=0;
          for(int i=0;i<n;i++){
              if(trees[i]>=h){
                  wood+=trees[i]-h;
              }
          }
          return wood>=m;
}
signed main() {
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>trees[i];
    }
    int lo=0,hi=1e9,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(isWoodSufficient(mid)){
             lo=mid;
        }else{
            hi=mid-1;
        }
    }
    if(isWoodSufficient(hi)){
        cout<<hi<<endl;
    }else{
        cout<<lo<<endl;
    }

}

