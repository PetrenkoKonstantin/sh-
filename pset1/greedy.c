#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int Count(int a, int b)
{
  int c;
  c = a - (10 * b);
  return c;
}

int NumberOfCoins(int quarter, int size)
{
  int count = 0;
  for (int i = quarter; i <= size; i = i + quarter)
    {
      count++;
    }
      return (count);
}

int main()
{
  float n;
     do {
         printf("O hai! How much change is owed?: ");   //просим пользователя ввести число
         n = GetFloat();
        } while ( (n == 0) || (n < 0));                 //проверяем число на правильность ввода
  n = n*100;											//переводим доллары в центы
  n = roundf(n);                                        // округляем число введеное пользователем до целого
  int size = (int)n;                                    //приводим тип числа введенного пользователем в int
  const int penny = 1;                                  //объявляем переменные 1,5,10 и 25 центов
  const int nickel = 5;
  const int dime = 10;
  const int quarter = 25;
  int difference;
  int count = 0;
  
	if (quarter <= size)      //первый проход
	{
		count = NumberOfCoins(25, size);
		difference = size - (25 * count);
	}
	else if (dime <= size)
	{
		count = NumberOfCoins(10, size);
		difference = Count(size, count);
	}
	else if (nickel <= size)
	{
		count = NumberOfCoins(5, size);
		difference = size - (5 * count);
	}
	else
	{
		difference = size / penny;
		printf("%i\n", difference);
	
			return 0;
	}

	int count1 = 0;
	int difference1 = 0;

	if (dime <= difference) //второй проход
	{
		count1 = NumberOfCoins(10, difference);
		difference1 = Count(difference, count1);
	}
	else if (nickel <= difference)
	{
		count1 = NumberOfCoins(5, difference);
		difference1 = difference - (5 * count1);
	}
	else
	{
		difference1 = difference / penny;
		printf("%i\n", count + difference1);
		return 0;
	}

	int count2 = 0;
	int difference2 = 0;

	if (nickel <= difference1) //третий проход
	{
		count2 = NumberOfCoins(5, difference1);
		difference2 = difference1 - (5 * count2);
	}
	else if (penny <= difference1)
	{
		difference2 = difference1 / penny;
		printf("%i\n", count + difference2);
		return 0;
	}
	int count3 = 0;
	if (penny <= difference)
	{
		count3 = difference2 / penny;
	}
	printf("%i\n", count + count1 + count2 + count3);
	return 0;
}

  
