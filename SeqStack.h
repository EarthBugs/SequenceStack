#pragma once

const int StackSize = 10;//栈最大长度

template<class DataType>
class SeqStack
{
private:
	DataType data[StackSize];
	int top;//栈顶指针，指向栈顶元素的下标
public:
	SeqStack();//构造函数
	void Push(DataType value);//将value元素入栈
	DataType Pop();//将栈顶元素弹出并返回
	DataType GetTop();//只读读取栈顶元素
	int IsEmpty();//判断栈是否为空
};