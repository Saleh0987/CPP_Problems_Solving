// What's the real floor?
int getRealFloor(int f)
{
 if (f <= 0)
 {
  return f;
 }
 else if (f < 13)
 {
  return f - 1;
 }
 else
 {
  return f - 2;
 }
}