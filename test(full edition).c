#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
mean()
{
	printf("****************************************\n");
	printf("********1.add      2.del****************\n");
	printf("********3.search   4.modeify************\n");
	printf("********5.show     6.sort***************\n");
	printf("********0.exit     7.save***************\n");
	printf("****************************************\n");

}
int main()
{
	int input = 0;
	struct contact con;//ͨѶ¼
	initcontact(&con);//��ʼ��
	do
	{
		mean();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);//��ӳ�Ա
			break;
		case DEL:
			delcontact(&con);//ɾ����Ա
			break;
		case SEARCH:
			searchcontact(&con);//���ҳ�Ա
			break;
		case MODIFY:
			modifycontact(&con);//�޸ĳ�Ա
			break;
		case SHOW:
			showcontact(&con);//��ӡ
			break;
		case SAVE:
			savecontact(&con);//����
			break;
		case EXIT:
			savecontact(&con);
			Destroycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while(input);
	
	return 0;
}