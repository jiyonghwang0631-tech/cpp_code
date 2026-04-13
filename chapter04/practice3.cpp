// 한 라인의 텍스트를 읽고 빈칸이 여러 개 있는 경우 1개로 줄인 새로운 문자열을 만들고, 이 문자열을 출력하라.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cout << "문자열 입력>> ";
    getline(cin, a, '\n');

    string b;

    for (int i = 0; i < a.size(); i++)
    {
        // 공백 처리
        if (a[i] == ' ')
        {
            // b가 비어있지 않고, 마지막이 공백이면 skip
            if (b.size() > 0 && b[b.size() - 1] == ' ')
                continue;
        }

        // 문자 추가
        b.append(1, a[i]);
    }

    cout << b << endl;

    return 0;

}
//if(line[i] == ' ' && line [i+1] != ' '){
//   dest.append(1, ' ');
//   else if (line[i] != ' ' ){
//  dest.append (1,lice[i]);
//   }
//