#include<stdio.h>
#define maxsize 100 //���ұ����󳤶�
typedef int KeyType;//����
typedef struct
{
	KeyType key;
}DataType;
typedef struct 
{
	DataType r[maxsize];  //����Ԫ�ش洢�ռ�
	int length;           //��ĳ���
}Sqlist;
main()
{
	Sqlist s;
	int i,j,t;
	scanf("%d",&s.length);
	for(i=0;i<s.length;i++)
	{
		scanf("%d",&s.r[i].key);
	}
	s.r[2]=s.r[3];
	for(i=0;i<s.length;i++)
	{
		printf("%d",s.r[i].key);
	}
}