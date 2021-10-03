//const iterator allow only read

list<string>::iterator iter;
vector<int>::difference_type count;

//use const iterator when needn't write data
list<string> a = {"Milton", "Shakespeare", "Austen"};
auto it1 = a.begin();   //list<string>::iterator
auto it2 = a.rbegin();  //list<string>::reverse_iterator
auto it3 = a.cbegin();  //list<string>::const_iterator
auto it4 = a.crbegin(); //list<string>::const_reverse_iterator

array<int, 10>; //array must point the size

list<string> names;
vector<const char *> oldstyle;
names = oldstyle;                               //wrong,different container type
names.assign(oldstyle.begin(), oldstyle.end()); //OK,const char* to string

vector<string> svec1(10);
vector<string> svec2(20);
swap(svec1, svec2);

list<int> ilist(10, 42);
ilist.resize(15);
ilist.resize(25, -1);
ilist.resize(5);

vector<int> ivec;
cout << ivec.size() << ivec.capacity(); //0,0
ivec.pushback();                        //add 24 elements
cout << ivec.size() << ivec.capacity(); //24,32
ivec.reserve(50);
cout << ivec.size() << ivec.capacity(); //24,50
ivec.push_back();                       //add 27 elements
cout << ivec.size() << ivec.capacity(); //51,100
ivec.shrink_to_fit();
cout << ivec.size() << ivec.capacity(); //51,51
