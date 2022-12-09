#include <bits/stdc++.h>
#define pb push_back
using namespace std;
         
int main() {
         int t;
         cin >> t;
         while(t--){
             int m;
             cin >> m;
             int n = 2*m;
             vector<int> v(101,0);
             vector<int> res;
             int a[n];
             for(int i = 0 ; i < n ; i++){
                 cin >> a[i];
                 if(v[a[i]] == 0){
                     v[a[i]] = 1;
                     res.pb(a[i]);
                 }
             }
             int s = res.size();
             for(int i = 0 ; i < s ; i++){
                 cout << res[i] << " ";
             }
             cout << endl;
         }
	return 0;
}
