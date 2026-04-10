#include <iostream>
#include <string>
using namespace std;

class Account {
    string Owner;
    int balance;

public:
    void deposit(int money);
    int withdraw(int money);
    string getOwner();
    int inquiry();

    Account(string o);
};

Account::Account(string o){
    Owner = o; 
    balance = 0;    
}

void Account::deposit(int money){
    balance += money;   
}

int Account::withdraw(int money){
    if(balance < money){
        money = balance;
        balance -= money;
    }
    else{
        balance -= money;
    }
    return money;
}

string Account::getOwner(){
    return Owner;
}

int Account::inquiry(){
    return balance;
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