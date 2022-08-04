#include <iostream>
using namespace std;

int front = -1;
int rear = -1;
int size = 1;
int *queue = new int[1];

void enqueue(int que[], int ele)
{
    que[size - 1] = ele;
    if (front == -1 & rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear += 1;
    }
    cout << "Front::" << front <<" "<<que[front]<<endl;
    cout << "Rear::" << rear <<" "<<que[rear]<<endl;
    cout << "Size::" << size << endl;
}

void dequeue(int que[])
{
    if (size <= 0)
    {
        cout << "Underflow" << endl;
    }
    else if (rear == 0)
    {
        int item = que[0];
        front = -1;
        rear == -1;
        size -= 1;
        cout << "Dequeued element xxx::" << item << endl;
    }
    else
    {
        int item = que[0];
        size-=1;
        int *newque = new int[size];
        for (int p = 0; p < rear; p++)
        {
            newque[p] = que[p+1];
        }
        rear -= 1;
        delete[] que;
        que = newque;
        newque = NULL;
        cout << "Dequeued element::" << item << endl;
        
    }
    cout << "--------------------" << endl;
    cout << "Front::" << front << endl;
    cout << "Rear::" << rear << endl;
    cout << "Size::" << size << endl;
}

void traverse(int que[])
{
    if (size <= 0)
    {
        cout << "Empty Queue" << endl;
    }
    else if (front == 0 & rear == 0)
    {
        cout << que[0] << "<--Front,Rear" << endl;
    }
    else
    {
        cout << que[0] << "<--Front" << endl;
        for (int i = 1; i < rear; i++)
        {
            cout << que[i] << endl;
        }
        cout << que[rear] << "<--Rear" << endl;
    }
    cout << "--------------------" << endl;
    cout << "Front::" << front << endl;
    cout << "Rear::" << rear << endl;
    cout << "Size::" << size << endl;
}

int main()
{
    int userc;
    do
    {
        cout << "1.ENQUEUE\n2.DEQUEUE\n3.TRAVERSE\n4.EXIT\nINPUT HERE::";
        cin >> userc;
        switch (userc)
        {
        case 1:
            int e;
            cout << "Enter element::";
            cin >> e;
            if (front != -1)
            {
                size += 1;
                int *newque = new int[size];
                for (int i = 0; i < size - 1; i++)
                {
                    newque[i] = queue[i];
                }
                delete[] queue;
                queue = newque;
                newque = NULL;
            }

            enqueue(queue, e);

            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            traverse(queue);
            break;
        }

    } while (userc != 4);
}