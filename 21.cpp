#include<stdio.h>
#include<stdlib.h>
struct Servitor{
	char id[20];
	char name[20];
	int wage;
	int hour;
	int pay;
};
int salc(struct Servitor*);
int main(void){
	struct Servitor servitor;
	printf("�п�J id:");
	scanf("%s", servitor.id);
	printf("�п�J name:");
	scanf("%s", servitor.name);
	printf("�п�J wage:");
	scanf("%d", &servitor.wage);
	printf("�п�J hour:");
	scanf("%d", &servitor.hour);
	salc(&servitor);
	printf("\n\n%s�����:---------\n", servitor.name);
	printf("ID:%s\n", servitor.id);
	printf("�m�W:%s\n", servitor.name);
	printf("���~:%d\n", servitor.wage);
	printf("�u�@�ɼ�:%d:\n", servitor.hour);
	printf("�~��:%d\n", servitor.pay);
}
int salc(struct Servitor *ser){
	(ser->pay)=(ser->wage)*(ser->hour);
	return (ser->pay);
}
