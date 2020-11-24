#include <iostream>
#include "SeqStack.h"
using namespace std;

//���캯��
template<class DataType>
SeqStack<DataType>::SeqStack()
{
	top = -1;
}

//��valueԪ����ջ
template<class DataType>
void SeqStack<DataType>::Push(DataType value)
{
	if (top == StackSize - 1) throw "����";
	top++;
	data[top] = value;
}

//��ջ��Ԫ�ص���������
template<class DataType>
DataType SeqStack<DataType>::Pop()
{
	DataType value;//�ݴ�ñ���
	if (top == 1) throw "����";
	value = data[top];
	top--;
	return value;
}

//ֻ����ȡջ��Ԫ��
template<class DataType>
DataType SeqStack<DataType>::GetTop()
{
	if (top != -1)
		return data[top];
	else
		return -1;
}

//�ж�ջ�Ƿ�Ϊ��
template<class DataType>
int SeqStack<DataType>::IsEmpty()
{
	if (top != -1)
		return 0;
	else
		return 1;
}