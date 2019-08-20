#include <iostream>

using namespace std;
class Msg{};

void processMsg(Msg* msg)
{
    // ...
    delete msg;
}

int main()
{
    Msg m;
    processMsg(&m);
}

/*
int main() 
{
    int a = 5;

    int * b = new int(5);

    cout << a << " " << *b << endl;


    int * const const_ptr = &a;

    const int const_val = 7;
    const int * ptr_to_const = &const_val;  

    return 0;
}*/