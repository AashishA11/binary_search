#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
     cin>>a[i];
    }
    cin>>k;
    int lo=0;
    int hg=n-1;
    int id=0;
    while (lo<=hg)
    {
        int mid=lo+(hg-lo)/2;  //use it for find mid because it avoid overflow
        if(a[mid]>=k)          
        {hg=mid-1;
        id=mid;
        }
        if(a[mid]<k)
        {lo=mid+1;
        }
    }
    if(id>=0)
    cout<<id;
    else
    cout<<"N0";
    return 0;
}
/*ex.
n=8
1 2 3 5 6 6 6 6
k=6;
lower bound of 6 is 4 first position of 6 in sorted array
*/