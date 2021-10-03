//variables

//initialize a variable
int v1 = 0;
int v2 = {0};
int v3(0);
int v4{0};

//compound type
int ival = 1024;
int &refVal = ival;
int &refVal12; //wrong!
int *ptrVal = &ival;
int *ptrVal12; //Ok

//void pointer
double obj = 3.14, *pd = &obj;
void *pv = &obj; //obj could be any type
pv = pd;         //Ok too