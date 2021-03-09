/* Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.
// answer is 2 index of minimum element in given array
Input : arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15};
Output: 0
*/
// so we find index of minimum element
// first we devide array in two parts and than determine unsorted array and than search in this part minmum element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
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
    cout<<index<<endl;
}
