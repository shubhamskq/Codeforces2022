#include <bits/stdc++.h>

using namespace std;
         
int main() {
        
        string s;
        cin >> s;
        int n = s.length();
        char st = 'a';
        int sum = 0;
        int l1 = 0, l2 = 0;
        for(int i = 0 ; i < n; i++){
             l1 = abs(s[i] - st);
             l2 = 26 - l1;
             sum += min(l1,l2);
             st = s[i];
        }
         cout << sum;
	return 0;
}
