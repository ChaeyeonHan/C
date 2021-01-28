//열혈C프로그래밍 7장 예제연습

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

//사용자가 입력한 정수로 구구단 출력
/*#include<stdio.h>

int main(void)
{
	int dan = 0, num = 1;
	printf("몇 단?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%dX%d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
} */

// 7-1 문제1번

/*#include<stdio.h>

int main(void)
{
	int num;
	printf("몇 번 출력하나요? ");
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
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	while (count++ < num) {
		printf("%d  ",3*count);
	}
	return 0;
} */

/*#include<stdio.h>

int main(void) {
	int num, sum = 0;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		sum = sum + num;
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);
	}
	printf("합계는 %d입니다.", sum);
	return 0;
} */

/*#include<stdio.h>

int main(void)
{
	int dan = 0, i = 9;
	printf("몇 단을 출력하나요? ");
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
	printf("몇개의 정수를 입력할까요? ");
	scanf_s("%d", &num);

	while (count <= num) {
		printf("정수입력: ");
		scanf_s("%d", num);
		sum = sum + num;
		count++;
	}

	ave = (double)sum / num;
	printf("평균 : %f", ave);

	return 0;
} */ // 155쪽 5번 이상함!!

//문제 07-1 while문의 중첩
#include<stdio.h>

int main() {
	int num, sum = 0;
	printf("정수를 입력하세요: ");
	while (num < 1) {
		printf("정수를 다시 입력하세요: ");
		while (num >= 1) {
			sum = num + sum;
		}
	}
}

//문제 07-4 for문의 활용  1번 (p.167)
/*#include<stdio.h>

int main() {
	int a, b, n, sum = 0;
	printf("두 개의 정수를 입력하세요(단 첫 번째 정수가 두 번째 정수보다 커야 한다.: ");
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		printf("다시 입력해주세요: ");
		scanf_s("%d %d", &a, &b);
	}
	for (n = b;n <= a;n++) {
		sum = sum + n;
	}
	printf("두 정수 사이의 정수 합: %d", sum);
} */

//문제 07-4 2번 왱ㄹㄹ for문에서 k가 n부턴데 1부터 실행되고 값이 안변함
/*#include<stdio.h>

int main() {
	int n, k = 0, answer = 0;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &n);
	for (k = n;k = 1;k--) {
		answer = answer * k;
	}
	printf("n! = %d", answer);
} */

//문제 08-1 if~else문의 활용 (p.189) --안나옴!
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
//문제 08-1 2번
/*#include<stdio.h>

int main() {
	int a, b;
	printf("두 수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);
	if (a >= b) {
		printf("두 수의 차: %d", a - b);
	}
	else
		printf("두 수의 차: %d", b - a);
} */

//문제 3번
/*#include<stdio.h>

int main() {
	int kor, eng, math, sum = 0;
	float ave = 0;
	printf("점수를 입력하세요: ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	sum = kor + eng + math;
	ave = (float)sum / 3;
	if (ave >= 90)
		printf("학점 : A");
	else if (ave >= 80)
		printf("학점 : B");
	else if (ave >= 70)
		printf("학점 : C");
	else if (ave >= 50)
		printf("학점 : D");
	else
		printf("학점 : F");
} */

//문제 4번
