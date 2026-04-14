// cin.getline()으로 영문 텍스트 한 라인을 입력 받아 단어가 몇개 있는지
// 출력하는 프로그램을 작성하라 "exit"을 받으면 종료하라.
// cstring 문자열 다루기 

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int text = 50;
    char line[text];

    while (true) {
        cout << "영문텍스트를 입력하세요 (빈칸 포함 가능)>> ";
        cin.getline(line, text);

     
        if (strcmp(line, "exit") == 0) 
        {
            break;
        }

        int count = 0;


        if (line[0] != ' ' && line[0] != '\0') {
            count++;
        }


        for (int i = 1; i < strlen(line); i++) {
            if (line[i] != ' ' && line[i - 1] == ' ') {
                count++;
            }
        }

        cout << "단어의 개수는 " << count << "개 입니다." << endl;
    }

    return 0;
}