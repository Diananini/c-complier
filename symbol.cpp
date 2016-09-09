#include <iostream>
#include <string>

using namespace ::std;

#include "symbol.h"
#include "tree.h"

symbol_table symtbl;

int symbol_table::lookup(string name)//�ҵ���ʶ���ڷ��ű��е�λ��
{
	for (int i = 0; i < size; i++)
		if (table[i].name == name)
			return i;
	return -1;
}

int symbol_table::insert(string name, int token)//�����±���
{
	if (size >= MAX_ID)
		return -1;
	table[size].name = name;
	table[size].token = token;
	table[size].type = Notype;
	size++;
	return size - 1;
}

int symbol_table::gettoken(string name)//�õ���ʶ�������������
{
	for (int i = 0; i < size; i++)
		if (table[i].name == name)
			return table[i].token;
	return -1;
}

string& symbol_table::getname(int pos)//�õ���Ӧλ�ñ�ʶ����
{
	return table[pos].name;
}

int symbol_table::set_type(int pos, int type)//���ñ�ʶ������
{
	if (pos < 0 || pos >= size)
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}

	table[pos].type = type;
	return 0;
}

int symbol_table::get_type(int pos)//�õ���ʶ������
{
	if (pos < 0 || pos >= size)
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}

	return table[pos].type;
}