

#include <iostream>
using namespace std;
int main()
{
    int count = 0, max = 0;
    for (int i = 1017; i < 7938; i++) 
    {
        if (i % 3 == 0 and i % 7 == 0)
        {
            if (i % 2 != 0 and i % 10 != 0 and i % 14 != 0 and i % 18 != 0)
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

