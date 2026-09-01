#include<bits/stdc++.h>
using namespace std;
int n;
int rec(int level) // return -> number of way to N if we are at stair level.
{
   //level -> stair i am at

   // pruning
   if(level > n) return 0;

   // base case
   if(level == n) return 1;

   int ans = 0;
   //loop over choice
   for(int step = 1; step <=3; step++){
      if(level + step <= n){
         // check -> is a valid choice 

         int ways = rec(level+step);//move
         ans += ways;
      }
   }
   return ans; // for this level
}

void solve(){
   cin >> n;
   cout << rec(1) << endl;
}
int main()
{  
   int i, t;
   cin >> t;
   for(i=1; i<=t; i++){
      solve();
   }
   return 0;
}
