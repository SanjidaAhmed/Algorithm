#include<bits/stdc++.h>
using namespace std;
int main()
{   
   int n;
   vector<int> v{2, 3, 4, 5, 6, 7};
   n = v.size();
   int to_find = 5;
   int lo = 0, hi = n-1;
   while(hi - lo > 1){
      int mid = (hi + lo) / 2;
      if(v[mid] < to_find){
         lo = mid+1;
      }
      else{
         hi = mid;
      }
   }
   if(v[lo] == to_find){
      cout << lo << endl;
   }
   else if(v[hi] == to_find){
      cout << hi << endl;
   }
   else{
      cout << "Not found!" << endl;
   }
   return 0;
}
