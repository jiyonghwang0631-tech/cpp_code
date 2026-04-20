//다음 main()과 실행 결과를 참고하여 WordCout 클래스와 2개의 static 맴버 함수를 작성하라
//실행결과
//단어개수는 3
//3번째 단어는 C++ 

#include <iostream>
#include <string>

using namespace std;

class WordUtility
{
private:
    /* data */
public:
    
    static int WordCount(string word);
    static string getWord(string word, int n);

    WordUtility(/* args */);
    ~WordUtility();
};

int WordUtility::WordCount(string word)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] != ' ' && inWord == false)
        {
            count++;
            inWord = true;
        }
        else if(word[i] == ' ')
        {
            inWord = false;
        }
    }

    return count;
}

string WordUtility::getWord(string word, int n)
{
    int wordcnt = wordCount(word);
    
}

WordUtility::WordUtility(/* args */)
{
}



WordUtility::~WordUtility()
{
}

int main()
{
    int n = WordUtility::WordCount("I love C++");
    cout << "단어 개수는 " << n << endl;
    string word = WordUtility::getWord("I love C++", 3);
    if(word == "")
        cout << "3번째 단어는 없습니다." << endl;
    else
        cout <<  "3번째 단어는 " << word << endl;
}



// gpt 버전 0으로 시작

// int WordUtility::WordCount(string word)
// {
//     int count = 0;
//   
//     for (int i = 0; i < word.size(); i++)
//     {
//         if (word[i] == ' ')
//         {
//             count++;
//         }
//         else 
//         {
//        
//         }
//        return count +1 ;
// }

//     return count;
// }
// string WordUtility::getWord(string word, int n)
// {
//     int count = 0;
//     string result = "";
//     bool inWord = false;

//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] != ' ')
//         {
//             result += word[i];
//             inWord = true;
//         }
//         else
//         {
//             if (inWord)
//             {
//                 count++;
//                 if (count == n)
//                     return result;

//                 result = "";
//                 inWord = false;
//             }
//         }
//     }

//     // 마지막 단어 처리
//     if (result != "")
//     {
//         count++;
//         if (count == n)
//             return result;
//     }

//     return "";
// }