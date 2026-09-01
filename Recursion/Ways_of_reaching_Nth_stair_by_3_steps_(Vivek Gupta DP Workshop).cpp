#include<bits/stdc++.h>
using namespace std;
int n;
int solve(int level)
{
   if(level > n) return 0;
   if(level == n) return 1;
   int ans = 0;
   for(int step = 1; step <=3; step++){
      if(level + step <= n){
         int ways = solve(level+step);
         ans += ways;
      }
   }
   return ans;
}
int main()
{  
   int i, t;
   cin >> t;
   for(i=1; i<=t; i++){
      cin >> n;
      cout << solve(1) << endl;
   }
   return 0;
}
