#include <iostream>
#include <windows.h>

int main()
{
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << "|";
	}*/

	const int size = 5;
	int arr[size]{ -23, -11, 9, -18, 25 };
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			result += arr[i];
		}
	}


}