// F_Z_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>

using namespace std;
/*Число называется совершенным, если сумма всех его делителей равна ему самому. Напишите
функцию поиска таких чисел во введенном интервале.

*/
bool Sov_Chislo(int num)
{
    int sum = 0;//переменная для хранения результата
    //в цикле для полученного функцией аргумента
    //будем находить его сомножители, путем деления его на все
    //целые числа в интервале от 1 до самого числа
    for (int j = 1; j < num; j++) {
        if (num % j == 0)
            sum += j;
    }
    //если число и сумма его сомножителей равны - значит число совершенное
    if (sum == num)
        return true;
    return false;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    for (int i = 1; i < 1000; ++i) //цикл от 1 до 1000
    {
        if (Sov_Chislo(i))
        {
            cout << i << endl;
        }
    }
}

