// 다음실행 사례를 참고하여, 날짜와 콘텐츠로 수겅되는 메모 1개를 저장하는 memo클래스를 작성하라
// 날짜와 콘텐츠로 문자열로 저장한다. 그러므로 memo 클래스는 string 타입의 date와 content맴버 변수와
// 1개의 생성자와 show(), isSamedate(), getdate(), getcontent()의 맴버 함수를 가진다.
// isSameDate()의 원형은 bool isSameDate(memo b)로 하면 된다.

#include <iostream>
#include <string>

using namespace std;

class Memo
{
private :
    string date;
    string content;
public :
    bool isSameDate(Memo b);
    string getContent();
    string getDate();
    void show();

    Memo(string d, string c);
};

bool Memo::isSameDate(Memo b)
{
    return date == b.date;
}
string Memo::getContent()
{
    return content;
}
string Memo::getDate()
{
    return date;
}
void Memo::show()
{
    cout << date << " : " << content << endl;
}

    Memo::Memo(string d, string c)
{
        date = d;
        content = c;
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