// Find Maximum and Minimum Values of a List
using namespace std;

int min(vector<int> list)
{
 int minValue = list[0];
 for (int i = 0; i < list.size(); i++)
 {
  if (list[i] < minValue)
  {
   minValue = list[i];
  }
 }
 return minValue;
}

int max(vector<int> list)
{
 int maxValue = list[0];
 for (int i = 0; i < list.size(); i++)
 {
  if (list[i] > maxValue)
  {
   maxValue = list[i];
  }
 }
 return maxValue;
}