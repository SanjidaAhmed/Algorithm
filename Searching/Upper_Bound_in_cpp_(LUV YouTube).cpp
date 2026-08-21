#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int>&v, int element)
{
   int lo = 0, hi = v.size()-1;
   while(hi - lo > 1){
      int mid = (lo + hi)/2;
      if(v[mid] <= element){
         lo = mid + 1;
      }
      else hi = mid;
   }
   if(v[lo] > element){
      return lo;
   }
   if(v[hi] > element){
      return hi;
   }
   return -1; // we can also return v.size();
}
int main()
{   
   vector<int> v{2, 3, 4, 5, 5, 5, 6, 6, 7};
   int element = 5;
   cout << upper_bound(v, element) << endl;
   return 0;
}
