#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string st;//Объявляем строку
	getline(cin, st);//Определяем количество элементов в строке
	int length = st.length();//создём из них масив
	int maxa = 0;
	int max1, a;
	for (int i = 0; i < length; i++) //перебераем массив
	{		
		max1 = 0;
		for (; st[i] == 'a'; i++) //перебиваем массив с нужной нам буквой
		{
			max1++;//подсчитываем количество нужных нвм элементов 
		}
		if (max1 > maxa)//условие большего количества элементов
		{
			maxa = max1;//переопределяем значение
			a = maxa;//присваеваем число другой переменной
		}			
	}
	cout << a;//выод числа

	return 0;
}