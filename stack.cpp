#include <iostream>
using namespace std;

int top = -1;
int size = 1;
int *stack = new int[1];

void push(int stk[], int e)
{
    stk[size - 1] = e;
    if (top == -1)
    {
        top = 0;
    }
    else
    {
        top += 1;
    }
    cout<<"Size::"<<size<<endl;
    cout<<"top::"<<top<<endl;
}
//----------------------------------------
void pop(int stk[])
{
    if (size<=0)
    {
        cout << "Underflow"<<endl;
    }
    else
    {
        int item = stk[size-1]; // popped item
        size -= 1;
        int *news = new int[size];
        for (int i = 0; i < size; i++)
        {
            news[i] = stk[i];
        }
        delete[] stk;
        stk = news;
        news = NULL;
        cout << "Popped element:" << item<<endl;
    }
    cout<<"Size::"<<size<<endl;
    cout<<"top::"<<top<<endl;
}
//----------------------------------------

void traverse(int stk[])
{
    if (size<=0)
    {
        cout << "Empty stack" << endl;
    }
    else
    {
        cout << stk[size - 1] << "<--TOP" << endl;
        for (int i = size - 2; i > -1; i--)
        {
            cout << stk[i] << endl;
        }
    }
}
//------------------------------------------
int main()
{

    int userc;

    do
    {
        cout << "1.PUSH\n2.POP\n3.TRAVERSE\n4.EXIT\nINPUT HERE::";
        cin >> userc;
        switch (userc)
        {
        case 1:

            int ele;
            cout << "Enter element to push::";
            cin >> ele;

            if (top != -1)
            {
                size += 1;
                int *newstack = new int[size];
                for (int i = 0; i < size - 1; i++)
                {
                    newstack[i] = stack[i];
                }
                delete[] stack;
                stack = newstack;
                newstack = NULL;
            }
            push(stack, ele);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            traverse(stack);
            break;
        }
    }while (userc != 4);
    return 0;
}