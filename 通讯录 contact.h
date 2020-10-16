
#include <stdio.h>
#include <string.h>
//#define MAX 1000
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
	struct peoinfo *data;
	int size;
};
void initcontact(struct contact* ps);
void addcontact(struct contact* pa);
void showcontact(const struct contact* pa);
