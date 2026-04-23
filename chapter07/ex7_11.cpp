#include <iostream>
using namespace std;

class Power
{
private:
    int kick;
    int punch;
public:
    void show();
    Power operator+(Power op2);

    Power operator+(int op1, Power op2);
    friend Power operator* (power op2);
    
    Power(int kick = 0, int punch = 0);
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

// 일반 사용 함수
Power Power::operator+(int op1, Power op2)
{
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}


int main()
{
    Power a(3,5), b(4,6), c;
    c = a.operator+(b);
    c = a + b;
    a.show();
    b.show();
    c.show();
    return 0;   

    b = 2 + a;


}
