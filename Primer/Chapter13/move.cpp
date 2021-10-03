int rr1 = 0;
int &&rr3 = std::move(rr1);

class StrVec
{
public:
    StrVec(StrVec &&) noexcept;
};

StrVec::StrVec(StrVec &&s) noexcept : {}
StrVec &StrVec::operator=(StrVec &&rhs) noexcept
{
    if (this != &rhs)
    {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}