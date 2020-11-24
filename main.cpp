#include <iostream>
#include "SeqStack.cpp"
using namespace std;

int main()
{
	SeqStack<int>* seqstack = nullptr;

	//ѭ��ִ������do-while���֣������û��˳�����
	bool exit_flag = 0;
	do
	{
		int input;

		//���벢�������Ϸ��� 
		int error_flag = 0;
		do
		{
			error_flag = 0;

			cout << "ѡ��Ҫ���еĲ���(�����Ӧ���)(������0��ȡ����)��";
			cin >> input;

			switch (input)
			{

			case 0://�������
			{
				cout << "1.�˳�����\n2.������˳��ջ\n3.���˳��ջ�Ƿ�Ϊ��\n4.ʹ��ָ��Ԫ��ѹջ\n5.ֻ����ȡ˳��ջ��Ԫ��\n6.����ջ��Ԫ��" << endl;
				break;
			}

			case 1:case 2:break;

			case 3:case 4:case 5:case 6:case 7:
			{
				//�ж�SeqStackָ���Ƿ�Ϊ�գ�Ϊ���������ָ��Ķ�����в���
				if (seqstack == nullptr)
				{
					cout << "���ȴ���˳��ջ��" << endl;
					error_flag = 1;
				}
				break;
			}

			default://�û����벻������������ѡ��ʱ����error_flag��1�������ʾ��䣬���¿�ʼѭ��
				cout << "����Ƿ���" << endl;
				error_flag = 1;
				break;

			}

		} while (error_flag == 1);

		//ִ�ж�Ӧ����
		switch (input)
		{

		case 1://�˳�����
		{
			exit_flag = 1;
			break;
		}

		case 2:
		{
			seqstack = new SeqStack<int>();
			cout << "	�Ѵ���������ջ��" << endl;
			break;
		}

		case 3:
		{
			int flag = seqstack->IsEmpty();
			if (flag)
				cout << "	����ջΪ�ա�" << endl;
			else
				cout << "	����ջ��Ϊ�ա�" << endl;
			break;
		}

		case 4:
		{
			int value;
			cout << "	�������ѹջԪ�أ�";
			cin >> value;
			seqstack->Push(value);
			cout << "	�ѽ�Ԫ�ء�" << value << "��ѹջ��" << endl;
			break;
		}

		case 5:
		{
			int Top = seqstack->GetTop();
			if (Top == -1)
				cout << "	˳��ջΪ�ա�" << endl;
			else
				cout << "	˳��ջ����Ԫ��Ϊ��" << Top << "��" << endl;
			break;
		}

		case 6:
		{
			cout << "	�ѵ���ջ��Ԫ�أ���ֵΪ��" << seqstack->Pop() << "��" << endl;
			if (seqstack->IsEmpty())
				cout << "	��ǰջΪ�ա�" << endl;
			else
				cout << "	��ǰջ��Ԫ��Ϊ��" << seqstack->GetTop() << "��" << endl;
			break;
		}

		}
	} while (!exit_flag);
	cout << "�����������˳���" << endl;
}