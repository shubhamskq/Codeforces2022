#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int n;
	      cin >> n;
	      vector<int> a;
	      for(int i = n ; i > 0; i--){
	          a.pb(i);
	      }
	      
	      for(int i = 0 ; i < n ; i++){
	          if(a[i] == i+1){
	              swap(a[i],a[i+1]);
	          }
	      }
	      for(int i = 0 ; i < n ; i++){
	          cout << a[i] << " ";
	      }
	      cout << endl;
	  }
	return 0;
}
