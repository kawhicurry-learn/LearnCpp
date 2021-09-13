//iterator
#include <string>
#include <vector>
using std::string;
using std::vector;

vector<int> v;
auto b = v.begin(), e = v.end();

string s("some string");
if (s.begin() != s.end())
{
    auto it = s.begin();
    *it = toupper(*it);
}