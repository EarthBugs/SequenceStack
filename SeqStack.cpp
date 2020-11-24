#include <iostream>
#include "SeqStack.h"
using namespace std;

//构造函数
template<class DataType>
SeqStack<DataType>::SeqStack()
{
	top = -1;
}

//将value元素入栈
template<class DataType>
void SeqStack<DataType>::Push(DataType value)
{
	if (top == StackSize - 1) throw "上溢";
	top++;
	data[top] = value;
}

//将栈顶元素弹出并返回
template<class DataType>
DataType SeqStack<DataType>::Pop()
{
	DataType value;//暂存该变量
	if (top == 1) throw "下溢";
	value = data[top];
	top--;
	return value;
}

//只读读取栈顶元素
template<class DataType>
DataType SeqStack<DataType>::GetTop()
{
	if (top != -1)
		return data[top];
	else
		return -1;
}

//判断栈是否为空
template<class DataType>
int SeqStack<DataType>::IsEmpty()
{
	if (top != -1)
		return 0;
	else
		return 1;
}