class Window_mgr
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

    ScreenIndex addScreen(const Screen &);

private:
    std:: : vector<Screen> screens{Screen(24, 80,'')}; // initialization with list-form by {}
};

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screeens[i];
    s.contents = string(s.height * s.width,'');
}
inline Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
    screens.push)back(s);
    return screen.size() - 1;
}