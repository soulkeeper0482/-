// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int count = 0, min = 8186;
    for (int i = 6391; i < 8186; i++)
    {

        if (i % 11 == 0 and i % 17 == 0) 
        {
            if (i % 2 != 0 and i % 13 != 0 and i % 14 != 0 and i % 34 != 0) 
            {
                count++;
                if (i < min) {
                    min = i;
                }
            }
        }
        
    }
    cout << count << min;
}



