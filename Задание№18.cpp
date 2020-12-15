// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
#include <iostream>
    using namespace std;

    {

        int min = 7857, count = 0;

        for (int i = 4885; i < 7857; i++)
        {
            if (i % 8 == 0 and i % 19 == 0)
            {
                if (i % 7 != 0 and i % 16 != 0 and i % 24 != 0 and i % 26 != 0)
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
}



