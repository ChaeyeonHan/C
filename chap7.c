//����C���α׷��� 7�� ��������

/*#include<stdio.h>

int main(void)
{
	int num = 0;
	while (num < 5)
	{
		printf("Hello World! %d \n", num);
		num++;
	}
	return 0;
}\ */

//����ڰ� �Է��� ������ ������ ���
/*#include<stdio.h>

int main(void)
{
	int dan = 0, num = 1;
	printf("�� ��?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%dX%d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
} */

// 7-1 ����1��

/*#include<stdio.h>

int main(void)
{
	int num;
	printf("�� �� ����ϳ���? ");
	scanf_s("%d", &num);
	while (num>0)
	{
		printf("Hello World! \n");
		num--;
	}
	return 0;
} */

/*#include<stdio.h>
int main(void) {
	int num, count = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	while (count++ < num) {
		printf("%d  ",3*count);
	}
	return 0;
} */

/*#include<stdio.h>

int main(void) {
	int num, sum = 0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		sum = sum + num;
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &num);
	}
	printf("�հ�� %d�Դϴ�.", sum);
	return 0;
} */

/*#include<stdio.h>

int main(void)
{
	int dan = 0, i = 9;
	printf("�� ���� ����ϳ���? ");
	scanf_s("%d", &dan);
	while (i>0) {
		printf("%d x %d = %d \n", dan, i, dan * i);
		i--;
	}
	return 0;
} */

/*#include<stdio.h>

int main(void)
{
	int num, count = 0, sum = 0, ave = 0;
	printf("��� ������ �Է��ұ��? ");
	scanf_s("%d", &num);

	while (count <= num) {
		printf("�����Է�: ");
		scanf_s("%d", num);
		sum = sum + num;
		count++;
	}

	ave = (double)sum / num;
	printf("��� : %f", ave);

	return 0;
} */ // 155�� 5�� �̻���!!

//���� 07-1 while���� ��ø
#include<stdio.h>

int main() {
	int num, sum = 0;
	printf("������ �Է��ϼ���: ");
	while (num < 1) {
		printf("������ �ٽ� �Է��ϼ���: ");
		while (num >= 1) {
			sum = num + sum;
		}
	}
}

//���� 07-4 for���� Ȱ��  1�� (p.167)
/*#include<stdio.h>

int main() {
	int a, b, n, sum = 0;
	printf("�� ���� ������ �Է��ϼ���(�� ù ��° ������ �� ��° �������� Ŀ�� �Ѵ�.: ");
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		printf("�ٽ� �Է����ּ���: ");
		scanf_s("%d %d", &a, &b);
	}
	for (n = b;n <= a;n++) {
		sum = sum + n;
	}
	printf("�� ���� ������ ���� ��: %d", sum);
} */

//���� 07-4 2�� �ۤ��� for������ k�� n���ϵ� 1���� ����ǰ� ���� �Ⱥ���
/*#include<stdio.h>

int main() {
	int n, k = 0, answer = 0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &n);
	for (k = n;k = 1;k--) {
		answer = answer * k;
	}
	printf("n! = %d", answer);
} */

//���� 08-1 if~else���� Ȱ�� (p.189) --�ȳ���!
/*#include<stdio.h>

int main() {
	int k;
	for (k = 1;k < 100;k++) {
		if (k % 7 == 0 || k % 9 ==0) {
			printf("%d \n", k);
			k += 1;
		}
		else 
			k += 1;
	}

}*/
//���� 08-1 2��
/*#include<stdio.h>

int main() {
	int a, b;
	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);
	if (a >= b) {
		printf("�� ���� ��: %d", a - b);
	}
	else
		printf("�� ���� ��: %d", b - a);
} */

//���� 3��
/*#include<stdio.h>

int main() {
	int kor, eng, math, sum = 0;
	float ave = 0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	sum = kor + eng + math;
	ave = (float)sum / 3;
	if (ave >= 90)
		printf("���� : A");
	else if (ave >= 80)
		printf("���� : B");
	else if (ave >= 70)
		printf("���� : C");
	else if (ave >= 50)
		printf("���� : D");
	else
		printf("���� : F");
} */

//���� 4��
