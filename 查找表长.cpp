#include<stdio.h>
#define maxsize 100 //查找表的最大长度
typedef int KeyType;//整型
typedef struct
{
	KeyType key;
}DataType;
typedef struct 
{
	DataType r[maxsize];  //数据元素存储空间
	int length;           //表的长度
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