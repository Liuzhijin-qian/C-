//���ڲ���д���ĳ���

#include "Contact.h"
int main()
{
	int input = 0;

	do
	{ 
		meun();
		printf("����������Ҫ�Ĳ���->");
		scanf("%d", &input);
		switch (input)
		{
		case ����:
			AddContcat;
			break;
		case ɾ��:
			DelContact;
		    break;
		case ����:
			SearchContact;
			break;
		case �޸�:
			ModifyContact;
			break;
		case ��ʾ:
			ShowContact;
			break;
		case ����:
			SortContact;
			break;
		case �˳�:
			printf("�����˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	
	} while (input);




	return 0;
}


