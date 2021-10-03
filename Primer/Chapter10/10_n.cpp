//Read
auto result = find(ia.begin(), ia.end(), val);

auto sum = accumulate(vec.cbegin(), vec.cend(), 0);
string sum = accumulate(vec.cbegin(), vec.cend(), string(""));

equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
//Write
fill(vec.begin(), vec.end(), 0);

fill_n(vec.begin(), vec.size(), 0); //OK
fill_n(vec.begin(), 10, 0);         //Wrong

vector<int> vec;
auto it = back_inserter(vec);
*it = 42;

fill_n(back_inserter(vec), 10, 0);

int a1[] = {1, 2, 3, 4, 5};
int a2[sizeof(a1) / sizeof(*a1)];
auto ret = copy(begin(a1), end(a1), a2);

replace_copy(ilist.cbegin(), ilist.cend(), back_inserter(ivec), 0, 42);

stable_sort(words.begin(), words.edn(),
            []
            { const string &a, const string &b }) //lamda
{
    return a.size() < b.size();
}

auto wc = find_if(words.begin(), words.end(), [sz](const string &a)
                  { return a.size() >= sz; });

auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
//to use _1
using std::placeholders::_1;

auto g = bind(f, a, b, _2, c, _1); //put the third parameter of g to second parameter of f

istream_iterator<Sales_item> item_iter(cin), eof;
ostream_iterator<Sales_item> out_iter(cout, "\n");
Sales_item sum = *item_iter++;
while (item_iter != eof)
{
    if (item_iter->isbn() == sum.isbn())
        sum += *item_iter++;
    else
    {
        out_iter = sum; //print the sum now
        sum = *item_iter++;
    }
}
out_iter = sum;