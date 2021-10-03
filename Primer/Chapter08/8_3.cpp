#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    for (const auto &entry : people)
    {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones)
        {
            if (!valid(nums))
            {
                badNums << " " << nums;
            }
            else
            {
                formatted << " " << format(nums);
            }
            if (badNums.str().empty())
            {
                os << entry.name << " " << formatted.str() << endl;
            }
            else
            {
                cerr << "input error:" << entry.name << " invalid number(s)" << badNums.str() << endl;
            }
        }
    }
}