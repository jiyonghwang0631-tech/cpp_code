#include <iostream>
using namespace std;

class Power
{
private:
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0);
    void show();
    Power& operator += (Power op2);
    ~Power();
};

Power::Power(int kick, int punch)
{
    this->kick = kick;
    this->punch = punch;
}

void Power::show()
{
    cout << "Kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator += (Power op2)
{
    kick = kick + op2.kick;
    punch = punch + op2.punch;
    return *this;
}

Power::~Power()
{
}

int main()
{
    Power a(3,5), b(4,6), c;
    a.show();
    b.show();
    c= a += (b);
    a.show();
    c.show();
    }
