#include <iostream>

int main()
{
    for (int x = 0; x < 4; x+=1)
    {
        for(int y = 0; y < 4; y+=1)
            std::cout << y;
        std::cout << "\n";
    }
    return 0;
}