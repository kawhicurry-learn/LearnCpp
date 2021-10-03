//const
const int bufSize = 512;
const int wrong; //wrong!uninitialized.

const int &ref = bufSize;

int i = 0;
int *const p1 = &i;  //top-level const
const int ci = 42;   //top-level const
const int *p2 = &ci; //low-level const

const int *p = nullptr;     //p is a ptr to integer constant
constexpr int *q = nullptr; //q is a constant ptr to integer
