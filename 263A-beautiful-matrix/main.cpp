#include <iostream>
#include <stdlib.h>
using namespace std;
 
 
int main() {
  int init_x;
  int init_y;
 
  for (int i = 0; i<25; i++) {
    int value;
    int x = i % 5;
    int y = i / 5;
    scanf("%d", &value);
    if (value == 1) {
      init_x = x;
      init_y = y;
      break;
    }
  }
 
  int x_steps = abs(2 - init_x);
  int y_steps = abs(2 - init_y);
  printf("%d", x_steps + y_steps);
}