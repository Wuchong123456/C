#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void initcontact(struct contact* ps)
{
	ps->data =(struct peoinfo*)malloc(DEFAULT_SZ * sizeof(struct peoinfo));
	if (ps->data == NULL)
	{
		return;
	}

	ps->capacity = DEFAULT_SZ;
	ps->size = 0;
	Loadcontact(ps);
}
void Checkcapacity(struct contact* pa);
void Loadcontact(struct contact* pa)
{
	struct peoinfo tmp = { 0 };
	FILE* paRead = fopen("contact.dat", "rb");
	if (paRead == NULL)
	{
		printf("Loadcontact::%s", strerror(errno));
	}
	while (fread(&tmp, sizeof(struct peoinfo), 1, paRead))
	{
		Checkcapacity(pa);
		pa->data[pa->size] = tmp;
		pa->size++;

	}
	
	fclose(paRead);
	paRead = NULL;
}
static int findbyname(const struct contact* pa, char name[MAX_name])
{
	int i = 0;
	for (i = 0; i < pa->size; i++)
	{
		if (0 == strcmp(pa->data[i].name, name))
		{
			return i;
		}
	}
		return -1;	
}

void Checkcapacity(struct contact* pa)
{
	if (pa->size == pa->capacity)
	{
		struct peoinfo* ptr = (struct peoinfo*)realloc(pa->data, (pa->capacity + 2)*sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			pa->data = ptr;
			pa->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void addcontact(struct contact* pa)
{
	/*if (pa->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}*/
	Checkcapacity(pa);
	/*else
	{*/
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
		printf("添加成功\n");
	/*}*/
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
		printf("%-10s\t %-4s\t %-5s\t %-20s\t %-20s\n", "名字", "年纪", "性别", "电话", "地址");
		for (i = 0; i < pa->size; i++)
		{
			printf("%-10s\t %-4d\t %-5s\t %-20s\t %-20s\n",
				pa->data[i].name,
				pa->data[i].age, 
				pa->data[i].sex,
				pa->data[i].tele,
				pa->data[i].addr);
		}
	}
}
void delcontact(struct contact* pa)
{
	char name[MAX_name]; 
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int pos = findbyname(pa, name);
	if (pos == -1)
	{
		printf("未找到要删除的人\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < (pa->size-1); j++)
		{
			pa->data[j] = pa->data[j + 1];
		}
		pa->size--;
		printf("删除成功\n");
		
	}
}
void searchcontact(const struct contact* pa)
{
	char name[MAX_name];
	printf("请输入要查找人的名字：>");
	scanf("%s", name);
	int pos = findbyname(pa,name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-10s\t %-4s\t %-5s\t %-20s\t %-20s\n", "名字", "年纪", "性别", "电话", "地址");
		printf("%-10s\t %-4d\t %-5s\t %-20s\t %-20s\n",
			pa->data[pos].name,
			pa->data[pos].age,
			pa->data[pos].sex,
			pa->data[pos].tele,
			pa->data[pos].addr);
	}

}
void modifycontact(struct contact* pa)
{
	char name[MAX_name];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = findbyname(pa, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pa->data[pos].name);
		printf("请输入年纪:>");
		scanf("%d", &(pa->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pa->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pa->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pa->data[pos].addr);
		
		printf("修改成功\n");
	}
}

void savecontact(struct contact* pa)//保存
{
	FILE* pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("%s", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pa->size; i++)
	{
		fwrite(&(pa->data[i]), sizeof(struct peoinfo), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;
}

void Destroycontact(struct contact* pa)
{
	free(pa->data);
	pa->data = NULL;
}