ifstream input(argv[1]);
ofstream output(argv[2]);
Sales_data total;
if (read(input, total))
{
    Sales_data trans;
    while (read(input, trans))
    {
        if (total.isbn() == trans.isbn())
            total.combine(trans);
        else
        {
            print(output, total) << endl;
            total = trans;
        }
    }
    print(output, total) << endl;
}
else
{
    cerr << "Nodata?!" << endl;
}

// Truncate
ofstream out("file1");
ofstream out2("file1", ofstream::out);
ofstream out3("file1", ofstream::out | ofstream::trunc);
// save content
ofstream app("file2", ofstream::app);
ofstream app2("file2", ofstream::out | ofstream::app);