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
	struct contact con;//通讯录
	initcontact(&con);//初始化
	do
	{
		mean();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);//添加成员
			break;
		case DEL:
			delcontact(&con);//删除成员
			break;
		case SEARCH:
			searchcontact(&con);//查找成员
			break;
		case MODIFY:
			modifycontact(&con);//修改成员
			break;
		case SHOW:
			showcontact(&con);//打印
			break;
		case SAVE:
			savecontact(&con);//保存
			break;
		case EXIT:
			savecontact(&con);
			Destroycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误重新选择\n");
			break;
		}
	} while(input);
	
	return 0;
}