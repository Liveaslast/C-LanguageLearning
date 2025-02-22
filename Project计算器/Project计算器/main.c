#include "计算器.h" 



void menu()
{
	printf("*****************************************************\n");
	printf("*****************1 .add             2.sub************\n");
	printf("*****************3.mul           4.dev***************\n");
	printf("**********           0.exit           ***************\n");
	printf("*****************************************************\n");
}

int main()
{
	int input = 0;
	Form form;
	Initform(&form);
	
	printf("欢迎使用计算器\n");
	menu();
	assign(&form);
	Init_pfarr(&form);//只需初始化一次，不能多次初始化*********************
	//printf("%.2f\n", form.data1[form.count1].image);用于判断初始化，assign能否正常运行
	void(*pfarr[5])(Form*) = { 0,Add,Sub,Mul,Dev };
	int sz = sizeof(pfarr) / sizeof(pfarr[0]) - 1;
	printf("pfarr数组可操作函数的个数是：%d\n", sz);

	
	do
	{
		printf("请选择操作\n");
		scanf("%d", &input);
		//printf("%.2f\n", form.data2[(form.count2)-1].image);判断Add功能正常
		if (input <= sz && input > 0)
		{
			pfarr[input](&form);
		}
		else if(input > sz || input < 0)
		{
			printf("输入无效，请输入有效数字\n");
		}
		printf("计算结果是:虚部：%f 实部：%f\n", form.data2[form.count2].image, form.data2[form.count2].real);
		//计算操作
	} while (input);

	printf("您已退出计算器\n");

	return 0;
}