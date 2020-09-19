#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void initcontact(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;

}
void addcontact(struct contact* pa)
{
	if (pa->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pa->data[pa->size].name);
		printf("请输入年纪:>");
		scanf("%d", &(pa->data[pa->size].age));
		printf("请输入性别:>");
		scanf("%s", pa->data[pa->size].sex);
		printf("请输入电话:>");
		scanf("%s", pa->data[pa->size].tele);
		printf("请输入地址:>");
		scanf("%s", pa->data[pa->size].addr);
		pa->size++;
	}
}
void showcontact(const struct contact* pa)
{
	if (pa->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年纪", "性别", "电话", "地址");
		for (i = 0; i < pa->size; i++)
		{
			printf("%-10s\t %-4d\t %-5s\t %-12s\t %-20s\t", pa->data[i].name, pa->data[i].age, pa->data[i].sex, pa->data[i].tele, pa->data[i].addr);
		}
	}
}
