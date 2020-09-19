#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
mean()
{
	printf("****************************************\n");
	printf("********1.add      2.del****************\n");
	printf("********3.search   4.modeify************\n");
	printf("********5.show     6.sort***************\n");
	printf("********0.exit           ***************\n");
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
		case 1:
			addcontact(&con);//添加成员
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			showcontact(&con);//打印
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误重新选择\n");
			break;
		}
	} while(input);
	return 0;
}
