#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_name 10
#define MAX_sex 3
#define MAX_tele 15
#define MAX_addr 10

struct peoinfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
struct contact
{
	int size;
	int capacity;
	struct peoinfo *data;
};
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
void initcontact(struct contact* ps);
void addcontact(struct contact* pa);
void showcontact(const struct contact* pa);
void delcontact(struct contact* pa); 
void searchcontact(const struct contact* pa);
void modifycontact(struct contact* pa);
void Destroycontact(struct contact* pa);
void savecontact(struct contact* pa);
void Loadcontact(struct contact* pa);