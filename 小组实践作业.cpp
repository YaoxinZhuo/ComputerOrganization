//2016-3-3 10:30:34 snowy_smile
#include<stdio.h>
#include<string.h>
#include<math.h>
/*�����������ԣ����λ����λΪ0������λ ����ֵ�Ķ����Ʋ��ȷ���õ�ԭ�롣
ԭ��=����=����

���ڸ������ԣ����λ����λΪ1������λ ����ֵ�Ķ����Ʋ��ȷ���õ�ԭ�롣
����Ϊԭ�������λ���λȡ��
����Ϊ����+1

��8�ֽڴ�������������Ϊ��
-1�Ĳ���Ϊ11111111
-128�Ĳ���Ϊ10000000

��������Բ������ʽ�洢���ݵġ�*/
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
	/*�����Ǳ�׾��ת����ʽ
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
/*float�ܳ���Ϊ32��ӵ��1������λ��8λ���룬23λβ��*/
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
		for (int i = px + 1; i <= px + W; ++i)//��Ӧ��β
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

	//�ٴ������//
	int q = 31 - 1 - 8;
	while (jm)
	{
		a[++q] = jm & 1;
		jm >>= 1;
	}

	for (int i = 31; i >= 0; --i)printf("%d", a[i]);
	puts("");
}
/*double�ܳ���Ϊ64��ӵ��1������λ��11λ���룬52λβ��*/
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
		for (int i = px + 1; i <= px + W; ++i)//��Ӧ��β
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

	//�ٴ������//
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