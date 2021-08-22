#include<iostream>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define SQR(a) ((a)*(a))
#define POW(a,n) ((!n)?1:a*pow(a,n-1))
#define EVEN(a) ( a % 2 == 0 ? "even" : "not even" ) //even-четный, not even-нечетный
#define NOEVEN(a) ( a % 2 != 0 ? "not even" : "even" ) //even-четный, not even-нечетный

 


using namespace std;


void main()
{

	cout << MAX(3, 2)<<endl;

	cout << MIN(3, 2) << endl;

	cout << SQR(3) << endl;

	cout << POW(3, 3) << endl;

	cout << EVEN(8) << endl;

	cout << NOEVEN(3) << endl;
	


}

/*Задание 2:
С помощью директивы #define написать следующие макросы:
 Нахождение меньшего из двух чисел;
 Нахождение большего из двух чисел;
 Возведение числа в квадрат;
 Возведение числа в степень;
 Проверка числа на четность;
 Проверка числа на нечетность;*/