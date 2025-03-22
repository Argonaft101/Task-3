/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << " Введите первое целое число: " << endl;
	cin >> num1;
	cout << " Введите второе целое число: " << endl;
 	cin >> num2;
    cout << " Введите третье целое число: " << endl;
 	cin >> num3;
   
    num1>=num2
    ? num1 == num2
	? b = num1 : num1>num2
	? num1 == num3
	? c = num1 : num1 > num3
	? c = num1 : b = num1
	:num1==num3
	? c = num1 : num1 < num3
	? b = num1 : a = num1
	           :num1<num2
	           ? num1==num3
	           ? c = num1 : num1 > num3
	           ? b = num1 : a = num1
	           : num1 == num3
	           ? c = num3 : num1 < num3
	           ? a = num1 : b = num1;
	
	
	num2>=num3           
	?num2 == num3
	? c = num2 : num2 > num3
	? num2 == num1
	? a = num2 : num2 > num1
	? c = num2 : b = num2
	: num2 == num1
	? a = num2 : num2 < num1
	? b = num2 : a = num2
	           : num2 < num3
	           ? num2 == num1
	           ? a = num2 : num2 > num1
	           ? b = num2 : a = num2
	           : num2 == num1
	           ? a = num2 : num2 < num1
	           ? a = num2 : b = num2;

	num3>=num1
	?num3 == num1
	? a = num3 : num3 > num1
	? num3 == num2
	? b = num3 : num3 > num2
	? c = num3 : b = num3
	: num3 == num2
	? b = num3 : num3 < num2
	? b = num3 : a = num3
	           : num3 < num1
	           ? num3 == num2
	           ? b = num3 : num3 > num2
	           ? b = num3 : a = num3
	           : num3 == num2
	           ? b = num3 : num3 < num2
	           ? a = num3 : b = num3;
	
	cout << " Результат сортировки: " << endl;
	cout << c << "  " << b << "  " << a << endl;

	return 0;
}