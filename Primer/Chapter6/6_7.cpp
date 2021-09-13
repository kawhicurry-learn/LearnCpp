//pointer on function
bool lengthCompare(const string &, const string &);
bool (*pf)(const string &, const string &); //pf is a pointer on lengthCompare
pf = lengthCompare;
pf = &lengthCompare; //'&' is optional

bool b1 = pf("hello", "goodbye");
bool b2 = (*pf)("hello", "goodbye");
bool b3 = lengthCompare("hello", "goodbye");

string::size_type sumLength(const string &, const string &);
bool cstringCompare(const char *, const char *);
pf = 0;
pf = sumLength; //error
