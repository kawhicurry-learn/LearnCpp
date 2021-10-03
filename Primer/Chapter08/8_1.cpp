#include <iostream>
#include <string>
using namespace std;

istream &test(istream &is)
{
    string str;
    while (!is.eof())
    {
        is >> str;
    }
    cout << str;
    is.clear();
    return is;
}

int main()
{
    auto state = test(cin).rdstate();

    cout << endl;
    cerr << "istream status is " << (state == 0 ? "effective" : "ineffective");
    cout << endl;

    cout << "hi!" << endl;
    cout << "hi!" << flush;
    cout << "hi!" << ends;

    cout << unitbuf;   //refresh buff immediately after output
    cout << nounitbuf; //cancel it

    cin.tie(&cout);                      //cpp standard has done that
    ostream *old_tie = cin.tie(nullptr); //have cin tied with nothing now
    cin.tie(&cerr);                      //not a good idea
    cin.tie(old_tie);                    //go back
    return 0;
}