#include <stdio.h>

int noinit1(int flag, int b) {
   int a;
   if (flag) {
      a = b;
   }
   return a;
}

int noinit2(int flag, int b) {
   int a;
   if (flag) {
      a = b;
   }
   return a;
}

int np()
{
   char *p1 = NULL ;
   if (p1 == NULL && *p1 == '\t') { // Noncompliant, p1 will be dereferenced IFF it is null
      printf("NUll pointer dereferenced");
   }
   return 0;
}

int np2() {
   char *p2 = NULL ;
   if (p2 != NULL) {
      printf( "Pointer not null");
   }
   *p2 = '\t'; // Noncompliant; potential null-dereference
   return 0;
}

int np3() {
   char *p3, *p4;
   p3 = NULL;
   // ...
   p4 = p3;
   *p4 = 'a';  // Noncompliant
   return 0;
}

int main ()
{
   int n;
   n = noinit2(1, 5);

   printf("Hello world %d", n);
	return 0;
}
