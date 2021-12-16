#ifdef BUGGY
#define DIVIDER 0
#else
#define DIVIDER 1
#endif
int main()
{
   int a = 5;
   int b = a / DIVIDER;
   return b;
}
