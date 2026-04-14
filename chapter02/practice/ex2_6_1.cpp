#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100];
    char b[100];

    cout << "두 문자열을 입력하세요>> ";
    
    cin >> a ;
    
    cout << "두 문자열을 입력하세요>> ";
    
    cin >> b;

    if(strcmp(a, b) == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}