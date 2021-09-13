class Screen
{
public:
    typedef std::string::size_type position;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    char get() const { return contents[cursor]; } // inline
    inline char get(pos ht, pos wd) const;        //obvious inline
    Screen &move(pos r, pos c);                   ///can be inline later

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
}

inline Screen &
Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + cursor;
    return *this;
}
char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}