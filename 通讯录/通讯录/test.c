#include "contact.h"


void menu()
{
	printf("*****************************************************\n");
	printf("***********1 .add             2.del     ************\n");
	printf("***********3.search           4.modify *************\n");
	printf("***********5.show             6.sort  ***************\n");
	printf("**********           0.exit           ***************\n");
	printf("*****************************************************\n");
	
}

int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
    	menu();
	    printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Addcontact(&con);
			break;
		case 2:
			Delcontact(&con);
			break;
		case 3:
			Search(&con);
			break;
		case 4:
			//修改，1查找Find_By_Name
			//2重新录入
			break;
		case 5:
			Showcontact(&con);
			break;
		case 6:
			//排序
			Sort_Contact(&con);
			break;
		case 0:
			SaveContact(&con);
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}while(input);
	return 0;
}