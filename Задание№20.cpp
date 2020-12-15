

#include <iostream>
using namespace std;

int main()
{
    int count = 0, max = 0;
    for (int i = 1721; i < 4333; i++)
    {
        if (i % 3 == 0 and i % 11 == 0) 
        {
            if (i % 5 != 0 and i % 9 != 0 and i % 13 != 0 and i % 22 != 0) 
            {
                count++;

                if (i > max) 
                {
                    max = i;
                }
            }
        }
    }
    cout << count << max;
}

