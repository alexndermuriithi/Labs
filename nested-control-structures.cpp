#include <iostream>

using namespace std;

int main()
{
    int x = 6, y = 0;
    
    if (x > y)
    {
        cout << "x is greater than y\n";
        if (x == 6)
            cout << "x is equal to 6\n";
        else 
            cout << "x is not equal to 6\n";
    }
    else 
        cout << "x is not greter than y\n";
    return 0;
}