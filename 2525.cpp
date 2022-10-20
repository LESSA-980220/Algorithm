#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int B_over = 0;

    int time;

    cin >> A >> B;
    cin >> time;

    B += time;

    while (B >= 60)
    {
        B -= 60;
        B_over++;
    }

    A += B_over;

    while (A >= 24)
    {
        A -= 24;
    }

    cout << A << " " << B << endl;
}
