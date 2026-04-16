    // 스택 방식으로 정수를 저장하는 클래스 MyStack을 작성하라. 스택은 푸시(push)와 팝(pop)의 두 기능을 가지는데,
    // push는 호출되는 정수를 저장하지만, pop은 나중에 저장된 것을 맨 먼저 뽑아낸다.
    // MyStack은 최대 10개의 정수를 저장한다.

    #include <iostream>
    using namespace std;

    class MyStack
    {
    private :
        int p[10];
        int tos = 0; // top of stack
    public :
        MyStack();
        bool push(int n);
        bool pop(int &n);

    };

    MyStack::MyStack()
    {
        
    }

    bool MyStack::push(int n)
    {
        if(this->tos < 10)
        {   
            p[this->tos] = n;
            tos++;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool MyStack::pop(int &n)
    {
        if (this->tos > 0)
        {
            tos--;
            n = p[this->tos]; 
            return true;
        }
        else
        {
            return false;
        }
    }


    int main()
    {
        MyStack st;
        for(int i = 0 ; i < 11 ; i++ )
        {
            if(st.push(i)) cout << i << ' ' ;
            else cout << endl << i+1 << "번째 푸시 실패! 스택 차 있음" << endl;
        }
        int n;
        for (int i = 0 ; i < 11 ; i++)
        {
            if(st.pop(n)) cout << n << ' ' ;
            else cout << endl << i+1 << "번째 팝 실패! 스택이 비어있음" << endl;
        }
    }

