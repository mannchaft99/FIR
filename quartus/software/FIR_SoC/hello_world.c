#include "system.h"
#include "sys/alt_stdio.h"

int main()
{
  int b_arr [9] = {1, 2, 1, 2, 3, 4, 1, 3, 4}; 
  int x_arr [9] = {1, 2, 3, 2, 5, 4, 1, 2, 2};
  int s = 0;
  int* c_ptr = (int*)FIR_0_BASE;
  *(c_ptr + 2) = 0;
  for (int i = 0; i < 9; i++) {

	  *(c_ptr + 0) = b_arr[i];
  }
  *(c_ptr + 2) = 1;

  for (int i = 0; i < 9; i++) {

	  *(c_ptr + 1) = x_arr[i];
  }

  s = *(c_ptr + 1);
  printf("done");
  return 0;
}
