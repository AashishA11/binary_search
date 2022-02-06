/*
https://www.spoj.com/problems/EKO/

https://www.spoj.com/problems/AGGRCOW/

https://www.spoj.com/problems/PIE/

https://www.codechef.com/problems/MINEAT

https://www.hackerearth.com/.../algor...

https://www.hackerearth.com/.../algor...

https://www.hackerearth.com/.../algor...

https://codeforces.com/problemset/pro...

https://codeforces.com/problemset/pro...

https://www.interviewbit.com/problems...

You can find more in below links, but you would have to filter:
https://www.codechef.com/tags/problem...


*/

// C++ program to implement recursive Binary Search 
#include <bits/stdc++.h> 
using namespace std; 
  
// A iterative binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m;    // if we directily use in int main we remembear that use break 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 
void binarySearch(int v[],int to_find,int n){
    int lo=0,hi=n-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<to_find){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(v[lo]==to_find){
        cout<<lo<<endl;
    }else if(v[hi]==to_find){
        cout<<hi<<endl;
    }else{
        cout<<"Not Find"<<endl;
    }
}  
int main(void) 
{ 
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int to_find;
     cin>>to_find;
     binarySearch(a,to_find,n);
} 