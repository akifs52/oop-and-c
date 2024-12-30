

#include <iostream>
#define N 200

using namespace std;
int main()
{
    int numbers[N];
    int counter = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i <N; i++)
    {
        if (numbers[i] > 0)
        {
            counter++;
        }
    }
                
    cout << "total positive integers: " << counter;
}
