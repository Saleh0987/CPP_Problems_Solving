// Remove String Spaces
#include <string>

std::string no_space(const std::string &x)
{
 std::string clean = "";

 for (int i = 0; i < x.length(); i++)
 {
  if (x[i] != ' ')
  {
   clean += x[i];
  }
 }

 return clean;
}