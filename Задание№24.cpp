

#include <iostream>
using namespace std;


int main()
{
    int count = 0, min = 13487;
    for (int i =7525;i<13487;i++)
    {
        if (i % 7 == 0) 
        {
            if (i % 6 != 0 and i % 9 != 0 and i % 14 != 0 and i % 21 != 0) 
            {
                count++;
                if (i < min) 
                {
                    min = i;
                }
            }
        }
    }
 cout << count << min;
}

