#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string = Owner;
    int balance;
public:
    void deposit(int money);
    int withdraw(int money);
    int inquiry();
   
    
    string getOwner();
    Account(string n);
    ~Account();
};

void Account::deposit(int money)
{
   balance += money;   
}
int Account::withdraw(int money)
{
    if(balance < money)
    {
        money = balance;
        balance -= money;
    }
    else
    {
        balance -= money;
    }
    return money;
}

int Account::inquiry()
{
    return balance;
}

string Account::getOwner()
{
    return Owner;
}


Account::Account(string n)
{
    Owner = n;
    balance = 0;
}

Account::~Account()
{
}


int main()
{
    Account a("황수희");
    a.deposit(20000);
    cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(15000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
    money = a.withdraw(8000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
}

