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
	//[] ��� ������ �������������� ����������
	setlocale(LC_ALL, "");
	//cout << "Hello Strings" << endl;
	'\0';//���� ��������� ������
	//NULL terminated lines - ��� �������� ������ � ����� �++
	//char str[] = { 'H','e','l','l','o',0 };
	//char str1[] = "Hello";
	//str1[1] = 'o'; //������ �������� �������
	//cout << str1 << endl;
	//const char str2[] = "World";
	//cout << str2 << endl;
	const int SIZE = 256;
	char str[SIZE] = {};
	SetConsoleCP(1251);//������ ��������� �� ������,�� ����� ������� �������,� �������� ��������, �� ����� ��������
	cout << "������� ������: "; //cin >> str;
	/*cin ��������� � ����� ����� ������ 0,
	//������� ������ ������� �� 0 � ���������� ���������� �� ������
	//cin ������ ����� �� �������*/
	cin.getline(str, SIZE);
	SetConsoleCP(866);//����� ��� �������� ���������
	//��������� ������� ����� � ���������,cin ����� ������� �� ������� ������� ������
	//getline �������� � ������� ������ �� ��� ������ � ������ �������
	cout << str << endl;
	cout<<"������ ��������� ������ " << StringLenght(str) << endl;

	
}