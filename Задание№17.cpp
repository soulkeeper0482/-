// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
#include <iostream>

    using namespace std;
    int main();
    {   
        
        int max = 0, count = 0;
        
        for (int i = 7487; i < 10007; i++)
        {
            
            if (i % 13 == 0)
                
            {
                if (i % 3 != 0 and i % 5 != 0 and i % 17 != 0 and i % 22 != 0)
                {   
                    
                    count++;
                    if (i>max)
                    {
                        max = i;

                    }
                    
                }
            }
            
        }
        cout << count << max;

    }
}
/*Долго мучился с тем, что для инициализации переменной, необходимо ей присвоить значеине 0
Получается там нельзя писать int max,count; А именно int max=0, count=0;

