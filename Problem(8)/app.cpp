// Quarter of the year
int quarter_of(int month)
{
 if (month < 4)
 {
  return 1;
 }
 else if (month < 7)
 {
  return 2;
 }
 else if (month < 10)
 {
  return 3;
 }
 else
 {
  return 4;
 }
}