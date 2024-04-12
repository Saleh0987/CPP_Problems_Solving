// Reversed Strings
#include <string>
using namespace std;

string reverseString(string str)
{
 // your Code is Here ... enjoy !!!
 string reversed = "";
 for (int i = str.length() - 1; i >= 0; i--)
 {
  reversed += str[i];
 }
 return reversed;
}