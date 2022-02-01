#include <iostream>
using namespace std;
 
 
int main() {
  int n_vectors;
  scanf("%d", &n_vectors);
  int x, y, z, xsum(0), ysum(0), zsum(0);
  for (int i = 0; i<n_vectors; i++) {
    scanf("%d %d %d", &x, &y, &z);
    xsum += x;
    ysum += y;
    zsum += z;
  }
 
  if (xsum == 0 && ysum == 0 && zsum == 0) {
    printf("YES");
  } else {
    printf("NO");
  }
 
  return 0;
}