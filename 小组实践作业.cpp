//2016-3-3 10:30:34 snowy_smile
#include<stdio.h>
#include<string.h>
#include<math.h>
/*对于正数而言，最高位符号位为0，其它位 以数值的二进制拆分确定得到原码。
原码=反码=补码

对于负数而言，最高位符号位为1，其它位 以数值的二进制拆分确定得到原码。
反码为原码除符号位外各位取反
补码为反码+1

以8字节带符号数据类型为例
-1的补码为11111111
-128的补码为10000000

计算机是以补码的形式存储数据的。*/
void transint(int x)
{
	printf("(int)%d:", x);
	int a[32]; memset(a, 0, sizeof(a));
	for (int i = 0; i < 32; ++i)
	{
		a[i] = x & 1;
		x >>= 1;
	}
	for (int i = 31; i >= 0; --i)printf("%d", a[i]);
	puts("");
	/*以下是笨拙的转化方式
	a[31] = x < 0;
	if (x >= 0)
	{
		a[31] = 0;
		for (int i = 0; i < 31; ++i)a[i] = (x >> i & 1);
	}
	else
	{
		a[31] = 1;
		x = -(x + 1);
		for (int i = 0; i < 31; ++i)a[i] = !(x >> i & 1);
	}
	for (int i = 31; i >= 0; --i)printf("%d", a[i]);
	puts("");*/
}
/*float总长度为32，拥有1个符号位，8位阶码，23位尾数*/
void transfloat(float x)
{
	printf("(float)%.3f:", x);
	int J = 8; int Yi = (1 << J - 1) - 1; int W = 23;
	bool a[64]; memset(a, 0, sizeof(a));
	int Z[64]; memset(Z, 0, sizeof(Z));
	int X[64]; memset(X, 0, sizeof(X));
	a[31] = x < 0;
	x = fabs(x);
	int zs = (int)x;
	int pz = 0;
	while (zs)
	{
		Z[pz++] = zs & 1;
		zs >>= 1;
	}--pz;
	double xs = x - (int)x;
	int px = 0;
	for (int i = 1; i <= 60; ++i)
	{
		xs *= 2;
		X[i] = (int)xs;
		xs -= (int)xs;
	}
	for (px = 1; px <= 60; ++px)if (X[px])break;
	if (px == 0)px = Yi;

	int jm = Yi;
	if (pz == -1)
	{
		jm -= px;
		int p = 31 - 1 - 8;
		for (int i = px + 1; i <= px + W; ++i)//对应着尾
		{
			a[p--] = X[i];
		}
	}
	else
	{
		jm += pz;
		int p = 31 - 1 - 8;
		for (int i = pz - 1; i >= 0; --i)
		{
			a[p--] = Z[i];
		}
		for (int i = 1;; ++i)
		{
			a[p--] = X[i];
			if (p < 0)break;
		}
	}

	//再处理阶码//
	int q = 31 - 1 - 8;
	while (jm)
	{
		a[++q] = jm & 1;
		jm >>= 1;
	}

	for (int i = 31; i >= 0; --i)printf("%d", a[i]);
	puts("");
}
/*double总长度为64，拥有1个符号位，11位阶码，52位尾数*/
void transdouble(double x)
{
	printf("(double)%.3f:", x);
	int J = 11; int Yi = (1 << J - 1) - 1; int W = 52;
	bool a[64]; memset(a, 0, sizeof(a));
	int Z[64]; memset(Z, 0, sizeof(Z));
	int X[64]; memset(X, 0, sizeof(X));
	a[63] = x < 0;
	x = fabs(x);
	int zs = (int)x;
	int pz = 0;
	while (zs)
	{
		Z[pz++] = zs & 1;
		zs >>= 1;
	}--pz;
	double xs = x - (int)x;
	int px = 0;
	for (int i = 1; i <= 60; ++i)
	{
		xs *= 2;
		X[i] = (int)xs;
		xs -= (int)xs;
	}
	for (px = 1; px <= 60; ++px)if (X[px])break;
	if (px == 0)px = Yi;

	int jm = Yi;
	if (pz == -1)
	{
		jm -= px;
		int p = 63 - 1 - 11;
		for (int i = px + 1; i <= px + W; ++i)//对应着尾
		{
			a[p--] = X[i];
		}
	}
	else
	{
		jm += pz;
		int p = 63 - 1 - 11;
		for (int i = pz - 1; i >= 0; --i)
		{
			a[p--] = Z[i];
		}
		for (int i = 1;; ++i)
		{
			a[p--] = X[i];
			if (p < 0)break;
		}
	}

	//再处理阶码//
	int q = 63 - 1 - 11;
	while (jm)
	{
		a[++q] = jm & 1;
		jm >>= 1;
	}
	
	for (int i = 63; i >= 0; --i)printf("%d", a[i]);
	puts("");
}
int main()
{
	transint(0);
	transint(-1);
	transint(17);
	transint(-17);
	//transdouble(38414.4);
	transdouble(17);
	transdouble(-17);
	transfloat(17);
	transfloat(-17);
	return 0;
}
/*
float
1:0 00000000 00000000 00000000 0000000
1:0 11111111 00000000 00000000 0000000
17:0 10000011 00010000 00000000 0000000
-17:1 10000011 00010000 00000000 0000000

-

*/