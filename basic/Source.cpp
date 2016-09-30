#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a, b, c, delta, x1, x2;			//khai bao bien
	printf("Chuong trinh giai phuong trinh bac hai");
	printf("Nhap ba so a b	 c : ");
	scanf_s("%f%f%f", &a, &b, &c);			//nhap bien
	delta = b*b - 4 * a*c;
	if (delta < 0) printf("phuong trinh vo nghiem");
	else
		if (delta == 0	)
	{
			printf("Phuong trinh co nghiem kep x1 = x2 = %6.2f", -b / (2 * a));
	}
		else
		{
			x1 = (-b - sqrt(delta) / (2 * a));
			x2 = (-b + sqrt(delta) / (2 * a));
			printf("Phuong trinh co hai nghiem phan biet x1 = %6.2f \t x2 = %6.2f", x1, x2);
		}
	_getch();
}