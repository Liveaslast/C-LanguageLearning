#include "计算器.h" 

void Initform(Form* hehe)//********************
{
	hehe->count1 = 0;
	hehe->count2 = 0;
	//所以初始化data1,data2有没有用
	hehe->data1;
	hehe->data2;
}

void Init_pfarr( Form* hehe)//初始化计算
{
	hehe->data2[0].image = hehe->data1[0].image;
	hehe->data2[0].real = hehe->data1[0].real;
}
void input(Form* hehe)//输入操作数后count移位
{
	scanf("%f %f", &hehe->data1[hehe->count1].image, &hehe->data1[hehe->count1].real);
	(hehe->count1)++;
}
void assign(Form* hehe)
{
	printf("请输入操作数的虚部与实部\n");
	input(hehe);
}

void Add(Form* hehe)
{
	printf("请输入另一操作数的虚部与实部\n");
	input(hehe);//count1后移1位
	hehe->data2[hehe->count2].image = hehe->data1[(hehe->count1) - 1].image + hehe->data2[hehe->count2].image;
	hehe->data2[hehe->count2].real = hehe->data1[(hehe->count1) - 1].real + hehe->data2[hehe->count2].real;
}
void Sub(Form* hehe)
{
	printf("请输入另一操作数的虚部与实部\n");
	input(hehe);//count1后移1位
	hehe->data2[hehe->count2].image = hehe->data1[(hehe->count1) - 1].image - hehe->data1[(hehe->count1) - 2].image;
	hehe->data2[hehe->count2].real = hehe->data1[(hehe->count1) - 1].real - hehe->data1[(hehe->count1) - 2].real;
	(hehe->count2)++;
}
void Mul(Form* hehe)
{

}
void Dev(Form* hehe)
{

}