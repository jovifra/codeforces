#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  int n, t;
  string s, ans;
  cin >> n >> t >> s;
  
  ans = s;
  for(int i = 0; i<t; i++) {
    for (int j = 0; j<n; j++) {
      if (s[j] == 'G' && s[j-1] == 'B') {
        ans[j-1] = 'G';
        ans[j] = 'B';
      }
    }
    s = ans;
  }
 
 
  cout << ans << "\n";
}