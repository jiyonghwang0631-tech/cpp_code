#include <iostream>
#include <string>

using namespace std;

class Memo
{
private:
    string date;
    string content;
public:
    bool isSameDate(Memo b);
    string getDate();
    string getContent();
    void show();

    Memo(string d, string c);
    ~Memo();
};

bool Memo::isSameDate(Memo b)
{
    return date == b.date;
}

string Memo::getDate()
{
    return date;
}

string Memo::getContent()
{
    return content;
}

void Memo::show()
{
    cout << date << ":" << content << endl;
}


Memo::Memo(string d, string c)
{
    date = d;
    content = c;
}

Memo::~Memo()
{
}


int main()
{
    Memo a("1:20", "동계 프로그램 캠프");
    Memo b("2:20", "김경미 독일 송별회");
    Memo c("2:21", "박채원 졸업식. 대학원 간대");

    a.show();
    if(a.isSameDate(b)) cout << "같은 날입니다." << endl;
    else cout << "다른 날입니다." << endl;
    cout << b.getDate() << "예 " << b.getContent() << endl;
}