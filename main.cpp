#include<iostream>
using  namespace std;

class Matrix
{
	size_t size1;//������ ������ � ������ 
	size_t size2 //������ ������� � ������
	int* str;//����� ������ � ������������ ������ 
	int* stb;// ����� ������� � ������������ ������
	int numstr//����� �����
	int numstb // ����� ��������
public:
	size_t get_size1()const
	{
		return size1;
	}
	size_t get_size2()const
	{
		return size2;
	}
	size_t get_numstr()const
	{
		return numstr;
	}
	size_t get_numstb()const
	{
		return numstb;
	}
	const int* get_str()const
	{
		return str;
	}

	int* get_str()
	{
		return str;
	}
	const int* get_stb()const
	{
		return stb;
	}

	int* get_stb()
	{
		return stb;
	}



	
	}