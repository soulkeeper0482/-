

#include <iostream>
using namespace std;

int main()
{
    int count = 0, max = 0;
    for (int i = 9913; i < 13895; i++)
    {
        if (i % 3 == 0 and i % 7 == 0)
        {
            if (i % 4 != 0 and i % 17 != 0 and i % 23 != 0 and i % 42 != 0) {
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


