#include <bits/stdc++.h>
#define pb push_back
using namespace std;
         
int main() {
           int t;
           cin >> t;
           while(t--){
               int x,y,z;
               cin >> x >> y >> z;
               if(x > y) swap(x,y);
               if(x > z) swap(x,z);
               if(y > z) swap(y,z);
               
               if(y == z){
                   cout << "YES" << endl;
                   cout << x << " " << x << " " << z;
               }
               else {
                   cout << "NO" ;
               }
               cout << endl;
           }
	return 0;
}
