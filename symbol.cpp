#include <iostream>
#include <string>

using namespace ::std;

#include "symbol.h"
#include "tree.h"

symbol_table symtbl;

int symbol_table::lookup(string name)//找到标识符在符号表中的位置
{
	for (int i = 0; i < size; i++)
		if (table[i].name == name)
			return i;
	return -1;
}

int symbol_table::insert(string name, int token)//加入新表项
{
	if (size >= MAX_ID)
		return -1;
	table[size].name = name;
	table[size].token = token;
	table[size].type = Notype;
	size++;
	return size - 1;
}

int symbol_table::gettoken(string name)//得到标识符所属单词类别
{
	for (int i = 0; i < size; i++)
		if (table[i].name == name)
			return table[i].token;
	return -1;
}

string& symbol_table::getname(int pos)//得到对应位置标识符名
{
	return table[pos].name;
}

int symbol_table::set_type(int pos, int type)//设置标识符类型
{
	if (pos < 0 || pos >= size)
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}

	table[pos].type = type;
	return 0;
}

int symbol_table::get_type(int pos)//得到标识符类型
{
	if (pos < 0 || pos >= size)
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}

	return table[pos].type;
}