#include <iostream>
using namespace std;

void my_strcat(char *str1, char *str2, char *str3);  // 함수 선언

void my_strcat(char *str1, char *str2, char *str3)
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        if(str1[i] != '\0')
            str3[i] = str1[i];
        else
        {
            str3[i] = '\0';
            temp = i;
            break;
        }
    }
    for (int i = 0 ; i < 10; i++)
    {
        if(str2[i] != '\0')
            str3[temp+i] = str2[i];
        else
        {
            str3[temp+i] = '\0';
            temp = i;
            break;
        }
    }
}


int main()
{
    
    char firtstname[10] = {10};
    char secondname[10] = {10};
    char fs_namme[20] = {10};
    
    cout << "성을 입력하세요";
    cin >> firtstname;
    
    cout <<"이름을 입력하세요";
    cin >> secondname;
    
// 함수 호출
my_strcat(firtstname, secondname, fs_namme);

cout << firtstname << secondname << endl;

cout << "전체 이름 출력 : " << firtstname << secondname << endl;

}
