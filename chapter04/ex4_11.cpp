#include <iostream>
#include <string>
using namespace std;

string str_append(string str1, const char *str2)
{
    return str1 + string(str2);
}

int main()
{
    string str = " I Love ";

    string str1 = str_append(str, "C++");
    
    cout << str1 << endl;

    string str2("test", 2);

    cout << str2 << endl;
    cout << str2[1] << endl;

    return 0;
}
