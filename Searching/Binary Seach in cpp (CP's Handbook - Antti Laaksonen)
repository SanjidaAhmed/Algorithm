#include<bits/stdc++.h>
using namespace std;

/* array_size has to be passed as parameter,
because when an array is passed to a function,
it becomes a pointer of the first element, 
not the original array */

int binary_search(int arr[], int n, int x)
{
   int a = 0, b = n-1;
   while(a <= b){
      int mid = (a+b)/2;
      if(arr[mid] == x){
         return mid;
      }
      if(arr[mid] > x) b = mid-1;
      else a = mid+1;
   }
   return -1;
}
int main()
{   
   int i, x, pos;
   int arr[] = {12, 2, 5, 8, 6, 10};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Before Sorting: " << endl;
   for(i=0; i<n; i++){
      cout << arr[i] << " ";
   }
   cout << endl << endl;
   cout << "After Sorting: " << endl;
   sort(arr, arr+n);
   for(i=0; i<n; i++){
      cout << arr[i] << " ";
   }
   cout << endl << endl;
   cout << "Search Element: " << endl;
   x = 8;
   pos = binary_search(arr, n, x);
   if(pos == -1){
      cout << "Element not found!" << endl;
   }
   else{
      cout << "Element " << x << " is found in position " << pos << endl;
   }
   return 0;
}
