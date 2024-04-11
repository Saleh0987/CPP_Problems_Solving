// Is n divisible by x and y ?

bool isDivisible(int n, int x, int y)
{
 // your code here
 //   if(n % x == 0 && n % y == 0)
 //     {
 //     return true;
 //     }
 //   else
 //     {
 //     return false;
 //     }

 return n % x == 0 && n % y == 0;
}