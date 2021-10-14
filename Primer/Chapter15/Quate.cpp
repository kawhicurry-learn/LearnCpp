class Quote
{
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    sd::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const;
    virtual ~Quote() = default;

private:
    std::string bookNo;

protected:
    double price = 0.0;
};
class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, std::size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(std::size_t) const = 0; //as pure virtual function

private:
    std::size_t quantity = 0;
    double discount = 0.0;
}

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &, double, std::size_t, double) : Disc_quote(book, price, qty, disc) {}

private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) {}

double
print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << "total due: " << ret << endl;
    return ret;
}

class Noderived final
{
};