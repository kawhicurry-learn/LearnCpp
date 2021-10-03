class Sales_data
{
public:
    Sales_data();                              //默认构造
    Sales_data(const Sales_data &);            //拷贝构造
    Sales_data &operator=(const Sales_data &); //赋值运算符
private:
    std::string bookNo;
    int units_sold = 0;
    double revenue = 0.0;
}

Sales_data::Sales_data(const Sales_data &orig) : bookNo(orig.bookNo),
                                                 units_sold(orig.units_sold),
                                                 revenue(orig.revenue)
{
}
Sales_data : operator=(const Sales_data &rhs)
{
    bookNo = rhs.bookNo;
    units_sold = rhs.units_sold;
    revenue = rhs.revenue;
    return *this;
}