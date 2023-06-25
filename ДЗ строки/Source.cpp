#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
//#include<cctype>
//#include<string>

using namespace std;

void to_lower(char* str);
void to_upper(char* str);
char* shrink(char str[]);
bool is_palindrom(const char str[]);
char* remove_symbol(char str[], char symbol);
bool is_bin_number(const char str[]);
int bin_to_dec(const char str[]);



int main()
{
	setlocale(0, "");
	const int SIZE = 25;
	char str[SIZE] = {}, puh[] = { "������        �����    ��   �����      �����    ���" };
	int p;
	SetConsoleCP(1251);

	/*cout << "1 ��������� ������ � ������ ������� \n";
	cout << "2 ��������� ������ � ������� ������� \n";
	cout << "3 ������� �� ������ ������ ������� \n";
	cout << "4 ����������, �������� �� ������ ����������� \n";
	cout << "5 ����������, �������� �� ������ ����� ������ \n";
	cout << "6 ���� ������ �������� ����� ������, ���������� ��� �������� \n";
	cin >> p;*/
	//cin.get();



	/*switch (p)
	{

	case (1):
		cout << "������� �����:\n";
		cin.getline(str, SIZE);
		to_lower(str);
		break;

	case (2):
		cout << "������� �����:\n";
		cin.getline(str, SIZE);
		to_upper(str);
		break;
	case (3):
		cout << puh << endl;
		cout<< shrink(puh);

		break;
	default:cout << "������ ��� ";


	}*/


	//to_upper(str);
	//cout << "����� ������,������� ������� 1: " <<str<< endl;
	//cout << endl;
	//	
	//to_lower(str);
	//cout << "����� ������ 2, ������ �������: " <<str<< endl;
	//cout << endl;
	//cout << endl << str;

	cout << "������� �����:\n";
	cin.getline(str, SIZE);
	cout << "������ " << (is_palindrom(str) ? "" : "�� ") << "�������� �����������" << endl;
	cout << str;

	cout << "������ " << (is_bin_number(str) ? "" : "��") << " �������� �������� ������" << endl;
	cout << str << "(bin) = " << bin_to_dec(str) << "(dec);\n";


	return 0;


}

//typeid() ���������� ����� ��� � �������

void to_lower(char* str)
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = (tolower(str[i]));
	}
};

void to_upper(char* str)
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = (toupper(str[i]));
	}
};
//char shrink(char* puh)
//{
//	//int a = strlen(puh);
//	char s, puh1[51];
//	for (int i = 0; puh[i]; i++)
//	{
//		if (puh[i] == ' '&& puh[i+1]==' ')
//		{
//			delete(puh,i);
//		}
//		else
//		{
//			continue;
//		}
//	};
//	return puh1[51];
//
//}
char* shrink(char puh[])
{
	for (int i = 0; puh[i]; i++)
	{
		while (puh[i] == ' ' && puh[i + 1] == ' ')
		{
			for (int j = i + 1; puh[j]; j++)
			{
				puh[j] = puh[j + 1];
			}
		}
	}
	while (puh[0] == ' ')
	{
		for (int i = 0; puh[i]; i++)
		{
			puh[i] = puh[i + 1];
		}
	}
	return puh;
};

char* remove_symbol(char str[], char symbol) //��������� ������ � ������,������� �������� ������
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
			for (int j = i; str[j]; j++)
				str[j] = str[j + 1];
	}
	return str;
}


bool is_palindrom(const char str[])
{
	cout << typeid(str).name() << endl;
	int n = strlen(str);//���������� � ���������� ������ ������ str
	char* bufer = new char [n + 1] {};//������� ����� ������ � ������������ ������
	strcpy(bufer, str);//������� �������� ������ ������ � ������
	to_lower(bufer);//����������� ������� ����� ��������
	remove_symbol(bufer, ' ');
	n = strlen(bufer);
	for (int i = 0; i < n / 2; i++)
	{
		if (bufer[i] != bufer[n - i - 1])
			return false;
	}
	delete bufer;
	return true;
};
bool is_bin_number(const char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != '0' && str[i] != '1')return false;
	};

	return true;

};

int bin_to_dec(const char str[])
{
	if (!is_bin_number(str))return 0;
	int n = strlen(str);
	int decimal = 0;
	int weight = 1;

	for (int i = n - 1; i >= 0; i--)
	{
		decimal += (str[i] - 48) * weight;
		weight *= 2;
	}

	return decimal;
};