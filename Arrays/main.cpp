#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//������� �������� ������� �� �����
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "������� �������� ��������� �������:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i]; //������ �������� �������� �������� � ����������
	}
	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//����� ������� �� ����� � �������� �������
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//���������� ����� ��������� �������
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� �������������� ��������� �������: " << (double)sum / SIZE << endl;
	//����� ������������ � ������������� �������� � �������
}