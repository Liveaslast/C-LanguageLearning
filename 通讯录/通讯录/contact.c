#include "contact.h"

void LoadContact(Contact* pc)
{
	FILE* pfread = fopen("contact.txt", "rb");
	if (pfread == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };

	while (fread(&tmp, sizeof(PeoInfo), 1, pfread) == 1)//当成功读取文件的时候会返回1
	{
		CheckCapacity(pc);//由于先前录入的人员数量可能大于Capacity,那么count可能会大于DEFAULT_SZ,此时需要增容
		pc->data[pc->count] = tmp;
		pc->count++;
	}

	fclose(pfread);
	pfread = NULL;
}



int InitContact(Contact* pc)
{
	assert(pc);
	//屏蔽静态版本
	//pc->count  = 0;
	//memset(pc->data, 0, sizeof(pc->data));//初始化data为0

	pc->count = 0;//(必须要有初始化)
	PeoInfo* ptr = (PeoInfo*)calloc(DEFAULT_SZ,sizeof(PeoInfo));
	if (NULL == ptr)
	{
		perror("malloc::data");
		return 1;
	}
	pc->data = ptr;
	pc->capacity = DEFAULT_SZ;
	LoadContact(pc);
	return 0;
}
void  Destory(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

void  CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)//若没有先初始化count，那么会导致无法添加内存，
		                          //进而导致AddContact中访问data进行指针运算时发生访问冲突
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (NULL == ptr)
		{
			perror("CheckCapacity");
			return 0;
		}
		else
		{
			pc->data = ptr;
			ptr = NULL;
			pc->capacity += INC_SZ;
			return 0;
		}
	}
	return 0;
}

int  Addcontact(Contact* pc)
{
	assert(pc);
	//屏蔽静态版本

	//if (pc->count == MAX_data)
	//{
	//	printf("通讯录满\n");
	//	return 0;
	//}
	
	CheckCapacity(pc);
	
	printf("请输入名字\n");
	scanf(" %19s", pc->data[pc->count].name);//让增加的信息所在地址和count相对应
	printf("请输入年龄\n");

	scanf("%d", &(pc->data[pc->count].age));

	printf("请输入性别\n");

	scanf("%9s", pc->data[pc->count].sex);

	printf("请输入电话\n");

	scanf("%19s", pc->data[pc->count].tele);
	printf("请输入地址\n");

	scanf("%29s", pc->data[pc->count].addr);
	pc->count++;
	printf("成功添加至通讯录\n");
	return 0;
}


void Showcontact(const Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name,
			pc->data[i].age, 
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int  Find_By_Name(Contact* pc,char name[MAX_name])//保密hhh
{
	assert(pc);
	for (int i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			//找到下标i
			return i;
		}
	}
	
	return -1;
}

void Delcontact( Contact* pc)
{
	assert(pc);
	assert(pc);
	printf("请选择要删除的人员\n");
	char name[MAX_name] = { 0 };
	scanf("%s", name);
	int pos = Find_By_Name(pc,name);
	if (pos >= 0)
	{
		for (int i = pos; i < pc->count -1; i++)
		{
			*pc->data[i].name = *pc->data[i + 1].name;
			pc->data[i].age = pc->data[i + 1].age;
			*pc->data[i].sex = *pc->data[i + 1].sex;
			*pc->data[i].tele = *pc->data[i + 1].tele;
			*pc->data[i].addr = *pc->data[i + 1].addr;
		}
		pc->count--;
		printf("删除成功\n");
	}
	else
	{
		printf("查无此人\n");
	}
}

void Search(Contact* pc)
{
	assert(pc);
	printf("请选择要查找的人员\n");
	char name[MAX_name] = { 0 };
	scanf("%s", name);
	int pos =Find_By_Name(pc, name);
	if (pos >= 0)
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
	else
	{
		printf("查无此人\n");
	}
}

void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfwrite = fopen("contact.txt", "wb");
	if (NULL == pfwrite)
	{
		perror("Savecontact");
		return;
	}

	//写文件----二进制
	for (int i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfwrite);//把一个结构体S类型大小的data写入到文本contact.txt中
	}

	fclose(pfwrite);
	pfwrite = NULL;
	return;
}




int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, (((PeoInfo*)e2)->name));
}
void sort_name(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
}

int cmp_peo_by_age(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, (((PeoInfo*)e2)->name));
}
void sort_age(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
}

int cmp_peo_by_sex(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, (((PeoInfo*)e2)->name));
}
void sort_sex(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
}

int cmp_peo_by_tele(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, (((PeoInfo*)e2)->name));
}
void sort_tele(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
}

int cmp_peo_by_addr(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, (((PeoInfo*)e2)->name));
}
void sort_addr(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
}

void Sort_Contact(Contact* pc)
{
	printf("请选择排序方式：\n");
	printf("1.name  2.age  3.sex  4.tele  5.addr\n");
	int se = 0;
	scanf("%d", &se);
	void (*pf[6])(Contact*) = { 0, sort_name,sort_age,sort_sex, sort_tele, sort_addr };
	pf[se](pc);
}

