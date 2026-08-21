#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, target, foundingPosition;;
    cin >> n;
    vector<int>a(n);
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> target;
    for(i=0; i<n; i++){
        if(a[i] == target){
            foundingPosition = i;
            break;
        }
    }
    cout << "Founds in Position: " << foundingPosition << endl;
    return 0;
}
