class GamePlayer
{
private:
    static const int NumTurns = 5; //这是个声明式而不是定义式！还需要在实现文件中写一个定义式！
    int scores[NumTurns];
};

class CostEstimate
{
private:
    enum
    {
        dle = 5
    };
    //enum hack,更像define，无法取地址
    int scores[dle];
}