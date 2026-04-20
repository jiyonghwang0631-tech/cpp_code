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
    Power operator+(Power op2);
    Power operator* (power op2);
  
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

Power Power::operator+(Power op2)
{
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

Power Power::operator* (power op2)
{
     Power tmp;
    tmp.kick = this->kick * op2.kick;
    tmp.punch = this->punch * op2.punch;
    return tmp;
}

Power::~Power()
{
}

int main()
{
    Power a(3,5), b(4,6), c;
    c = a.operator+(b);
    a.show();
    b.show();
    c.show();
    return 0;   

    c = a * b;

}
