#pragma once

const int StackSize = 10;//ջ��󳤶�

template<class DataType>
class SeqStack
{
private:
	DataType data[StackSize];
	int top;//ջ��ָ�룬ָ��ջ��Ԫ�ص��±�
public:
	SeqStack();//���캯��
	void Push(DataType value);//��valueԪ����ջ
	DataType Pop();//��ջ��Ԫ�ص���������
	DataType GetTop();//ֻ����ȡջ��Ԫ��
	int IsEmpty();//�ж�ջ�Ƿ�Ϊ��
};