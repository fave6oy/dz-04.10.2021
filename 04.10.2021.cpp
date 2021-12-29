/* Написать программу, которая в консоли отображает m ромбов из символов звездочка '*' высоты (2n-1) звездочек. */
#include <iostream>

using namespace std;

void drawing(int rcount, int leng)
{
    for (int layer = 1; layer <= leng; ++layer)
    {
        for (int j = 1; j <= rcount; ++j)
        {
            for (int k = 1; k <= leng - layer; ++k)
            {
                cout << ' ';
            }
            for (int k = 1; k <= 2 * layer - 1; ++k)
            {
                cout << '*';
            }
            for (int k = 1; k <= leng - layer; ++k)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
    for (int layer = leng - 1; layer >= 1; --layer)
    {
        for (int j = 1; j <= rcount; ++j)
        {
            for (int k = 1; k <= leng - layer; ++k)
            {
                cout << ' ';
            }
            for (int k = 1; k <= 2 * layer - 1; ++k)
            {
                cout << '*';
            }
            for (int k = 1; k <= leng - layer; ++k)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

int main()
{
    int rcount, leng;
    cin >> rcount >> leng;
    drawing(rcount, leng);
    return 0;
}

