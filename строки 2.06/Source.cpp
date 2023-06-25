#include<iostream>
#include<Windows.h>
using namespace std;
int StringLenght(char str[])
{
	int i=0,count=0,count1=0;
	
	while(str[i]!='\0') //for (int i = 0; i < str[i]; i++)
	{
		++i;
	}

	for (int j = 0; str[j]!='\0'; j++)
	{
		count++;
	}
	for (int b = 0; str[b]; b++)
	{
		count1++;
	}
	return i, count, count1;
}

void main()
{
	//[] эти скобки разименовывают переменную
	setlocale(LC_ALL, "");
	//cout << "Hello Strings" << endl;
	'\0';//знак окончани€ строки
	//NULL terminated lines - так называют строки в €зыке —++
	//char str[] = { 'H','e','l','l','o',0 };
	//char str1[] = "Hello";
	//str1[1] = 'o'; //замена элемента массива
	//cout << str1 << endl;
	//const char str2[] = "World";
	//cout << str2 << endl;
	const int SIZE = 256;
	char str[SIZE] = {};
	SetConsoleCP(1251);//мен€ем кодировку на русску,но нужно сменить обратно,в соновном работает, но может глюкнуть
	cout << "введите строку: "; //cin >> str;
	/*cin добавл€ет в конец ввода текста 0,
	//функци€ чтени€ доходит до 0 и прекращает считывание из пам€ти
	//cin вводит текст до пробела*/
	cin.getline(str, SIZE);
	SetConsoleCP(866);//смена дл€ возврата кодировки
	//позвол€ет вводить текст с пробелами,cin легко вылазит за пределы размера строки
	//getline помещает и выводит только то что влазит в размер массива
	cout << str << endl;
	cout<<"размер введенной строки " << StringLenght(str) << endl;

	
}