//���ڲ���д���ĳ���

#include "Contact.h"
int main()
{
	//ѡ����Ҫ�Ĳ���
	int input = 0;
	//����ͨѶ¼
	struct Contact Con;
	//��ʼ��ͨѶ¼
	InitializeContact(&Con);

	do
	{ 
		meun();
		printf("����������Ҫ�Ĳ���->");
		scanf("%d", &input);
		switch (input)
		{
		case ����:
			AddContact(&Con);
			break;
		case ɾ��:
		    DelContact(&Con);
		    break;
		case ����:
		   SearchContact(&Con);
			break;
		case �޸�:
		    ModifyContact(&Con);
			break;
		case ��ʾ:
			ShowContact(&Con);
			break;
		case ����:
		//	SortContact;
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


