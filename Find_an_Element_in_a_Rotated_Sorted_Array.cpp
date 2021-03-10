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
            return m;    // if we directily use in int main we rembear that use break 
  
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int lo=0,hi=n-1;
    int index=-1;
    int start =0,end=n-1;
    while(hi>=lo)
    {
        int mid=lo+(hi-lo)/2;
        int next=(mid+1)%n; //if mid=n than %n give first element
        int previous=(mid+n-1)%n; //if mid=0 than (0-1+n)%n=n-1
        if(a[mid]<=a[previous]&&a[mid]<=a[next])
        {
            index =mid;
            break;
        }
        else if(a[start]<=a[mid]&&a[mid]<=a[end]) //in this condition array is sorted so ans is 0
        {
            index=0;
        break;
        }
        else if(a[start]<=a[mid])  // this condions give unsorted array and than we find it in unsorted array
        lo=mid+1;    
        else if(a[mid]<=a[end])   // this condions give unsorted array and than we find it in unsorted array
        hi=mid-1; 
    }
    int p=binarySearch(a,0,index-1,x);
    int q=binarySearch(a,index,n-1,x);
cout<<p<<endl;
cout<<q<<endl;
}

