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
    bool operator == (Power op2);
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

bool Power::operator == (Power op2)
{
    if(kick == op2.kick && punch == op2.punch) return true;
    else return false;
}

Power::~Power()
{
}

int main()
{
    Power a(3,5), b(3,5);
    a.show();
    b.show();
    if(a == b) cout << "두 파워가 같다." << endl;
    else cout << "두 파워가 다르다." << endl;   
}
