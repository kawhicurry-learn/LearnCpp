//
//alias
typedef double another_double;
using int = another_int;

//auto
int i = 0, &r = i;
auto a = r; //a is a integer rather than a reference.

const int ci = i, &cr = ci;
auto b = ci; //b is a integer,top-level const on ci will be ignore
auto c = cr;
auto d = &i;
auto e = &ci;

const auto f = ci; //f will be top-level const
auto &g = ci;      //bound success too

//decltype