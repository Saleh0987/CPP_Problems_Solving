// Calculate average
#include <vector>

double calcAverage(const std::vector<int> &values)
{
 double result = 0;
 for (int i = 0; i < values.size(); i++)
 {
  result += values[i];
 }
 return result / values.size();
}