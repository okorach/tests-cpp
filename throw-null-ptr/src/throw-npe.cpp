#include<iostream>
#include <string.h>
#include <stdexcept>
using namespace std;

#define INVALID_ARG invalid_argument("hello this is invalid")

#define THROW(something)   throw(something)

#define THROW_COMPLEX(something) {  \
   print("Hello I will throw"); \
   throw(something); \
}

void f_throw(char *p) {
   if (p == NULL) {
      THROW(INVALID_ARG);
   }
   *p = 'a';
}

void f_print(char *p) {
   if (p == NULL) {
      printf("Hello P is NULL");
   }
   *p = 'a';
}

int main ()
{
   char name[10];
   string joe("Joe");
   char *p = NULL;
   strcpy(name, "Yacine");
   f_throw(name);
   f_throw((char *)&joe);
   f_throw(p);

   f_print(name);
   f_print((char *)&joe);
   f_print(p);
}
