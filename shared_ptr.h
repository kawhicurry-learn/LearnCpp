#ifndef _shared_ptr
#define _shared_ptr

template <class T>
class shared_ptr
{
public:
    T &operator*() const { return *px; }
    T *operator->() const { return px; }

    shared_ptr(T *p) : px(p) {}

private:
    T *px;
    long *pn;
};

#endif