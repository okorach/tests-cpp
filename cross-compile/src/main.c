#include <stdio.h> /* NOK, according to the MISRA C 2004 20.9 rule, stdio.h must not be used in embedded system's production code */

#include <mylib.h>

/*
 * Compile & run from current folder:
 *   gcc -Wall -pedantic -std=c99 -I../lib -o main main.c && ./main
 */
#ifdef TARGET_X86
#define ADD(x, y) (x+y)
#else
int ADD(int a, int b) {
  return a * b;
}
#endif

int main(void) {
  int x = ADD(40, 2);

#ifdef LCD_DISPLAY
  send_to_diplay(x);
#else
  printf("Reuslt to console = %d\n", x);
#endif
}

