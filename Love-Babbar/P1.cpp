#include <iostream>
using namespace std;

void pyramid(int N)
{
    N = N/2;
    for (int i = 0; i < N; i++)
    {
        // Print spaces
        for (int j = 0; j < N - i -1; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        // Move to the next line
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        // Print spaces
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < N - i; k++)
        {
            cout << "* ";
        }
        // Move to the next line
        cout << endl;
    }
}

void Hollowpyramid(int N){
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < N - i; k++){
            if(i == 0 || i == N-1 || k == 0 || k == N - i - 1)
            cout << "  ";
            else
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < N - i; k++)
        {
            if (i == N - 1 || k == 0 || k == N - i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    Hollowpyramid(a);
    return 0;
}
