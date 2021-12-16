int main ()
{
   int x, y, z;
#ifdef UNSELECTED_BRANCH
   /* This branch is compiled only if UNSELECTED_BRANCH is defined
    * If UNSELECTED_BRANCH is not defined
    * The only metrics to which this branch contributes are:
    * - Lines
    * - Comments 
    * and derivative metrics (comments density etc...)
   */
   int a, b, c, d, e;
   a = 7;
   b = 3;
   c = 9;
   e = 6;
   z = 10;
   y = 2;
   x = z*y;
   switch (a) 
   {
   case 1:
      b = 1;
      break;
/*   case 2:
      b = 2;
      break;
*/
   case 3:
      b = 3;
      break;
   case 4:
      b = 4;
      break;
   default:
      b = 5;
      break;
   }
#else
   /* This branch is compiled if BRANCH1 is NOT defined */
   int e;
   e = 6;
   z = 10;
   y = 2;
   x = z/y;
#endif
   return 0;
}
