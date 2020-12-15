

#include <iostream>
using namespace std;

int main()
{
	int count = 0, min = 13020;
	{
		for (int i = 3521; i < 13020; i++) 
		{
			if (i % 9 == 0 and i % 15 == 0) 
			{
				if (i % 6 != 0 and i % 12 != 0 and i % 17 != 0 and i % 21 != 0) 
				{
					count++;
					if (i < min) {
						min = i;
					}
				}
			}
		}
	}
	cout << count << min;
}

\