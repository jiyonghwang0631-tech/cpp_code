// cin.getline()을 이용하여 "ok"가 될때까지 종료되지 않는 프로그램을 작성하라.
// if(strcmp(buf, "OK") == 0 ) 이용하라.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[10];
    
    while(true)
    {
        cout << "끝내려면 OK를 입력하세요>> " ;

        cin.getline(a, 10);
        
        if(strcmp(a, "OK") == 0)
        {
            break;
        }
        
    }
    
    cout << "종료합니다." << endl;
 
    return 0;
}

