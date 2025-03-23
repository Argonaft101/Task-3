// Task 3.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int num1 = 0;
	int num2 = 0;
	int val1;
	int val2;
	  
 	string res1;
	string res2;
	string s1;
	string s2;

    std::cout << "Введите целое число: \n";
	std::cin >> num1;
	std::cout << "Введите целое число: \n";
	std::cin >> num2;

	switch (num1) {
	case 90: case -90: {
		res1 = "девяносто";
		break;
	}

	case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99:
	case -91: case -92: case -93: case -94: case -95: case -96: case -97: case -98: case -99:
	{
		val1 = 90;
		int calc1 = num1 % val1;
		if (calc1 > 90 && calc1 < 100) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 98:
				s1 = "восемь";
				break;
			case 99:
				s1 = "девять";
				break;
			}

		}
		res1 = "девяносто " + s1;
		break;
	}
	case 80: case -80: {
		res1 = "восемьдесят";
		break;
	}

	case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89:
	case -81: case -82: case -83: case -84: case -85: case -86: case -87: case -88: case -89:
	{
		val1 = 80;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}

		}
		res1 = "восемьдесят " + s1;
		break;
	}
	case 70: case -70: {
		res1 = "семьдесят";
		break;
	}

	case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79:
	case -71: case -72: case -73: case -74: case -75: case -76: case -77: case -78: case -79:
	{
		val1 = 70;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}

		}
		res1 = "семьдесят " + s1;
		break;
	}
	case 60: case -60: {
		res1 = "шестьдесят";
		break;
	}

	case 61: case 62: case 63: case 64: case 65: case 66: case 67: case 68: case 69:
	case -61: case -62: case -63: case -64: case -65: case -66: case -67: case -68: case -69:
	{
		val1 = 60;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}

		}
		res1 = "шестьдесят " + s1;
		break;
	}
	case 50: case -50:{
		res1 = "пятьдесят";
		break;
	}

	case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59:
	case -51: case -52: case -53: case -54: case -55: case -56: case -57: case -58: case -59:
	{
		val1 = 50;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}

		}
		res1 = "пятьдесят " + s1;
		break;
	}
	case 40: case -40: {
		res1 = "сорок";
		break;
	}

	case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49:
	case -41: case -42: case -43: case -44: case -45: case -46: case -47: case -48: case -49:
	{
		val1 = 40;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}

		}
		res1 = "сорок " + s1;
		break;
	}
	case 30: case -30: {
		res1 = "тридцать";
		break;
	}

	case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39:
	case -31: case -32: case -33: case -34: case -35: case -36: case -37: case -38: case -39:
	{
		val1 = 30;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}
		}
		res1 = "тридцать " + s1;
		break;
	}
	case 20: case -20:{
		res1 = "двадцать";
		break;
	}

	case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29:
	case -21: case -22: case -23: case -24: case -25: case -26: case -27: case -28: case -29:
	{
		val1 = 20;
		int calc1 = num1 % val1;
		if (calc1 > val1 && calc1 < (val1 + 10)) {
			switch (calc1) {
			case 1:
				s1 = "один";
				break;
			case 2:
				s1 = "два";
				break;
			case 3:
				s1 = "три";
				break;
			case 4:
				s1 = "четыре";
				break;
			case 5:
				s1 = "пять";
				break;
			case 6:
				s1 = "шесть";
				break;
			case 7:
				s1 = "семь";
				break;
			case 8:
				s1 = "восемь";
				break;
			case 9:
				s1 = "девять";
				break;
			}
		}
		res1 = "двадцать " + s1;
		break;
	}

	case 10: case -10:{
		res1 = "десять";
		break;
	}
	case 11: case -11:{
		res1 = "одиннадцать";
		break;
	}
	case 12: case -12: {
		res1 = "двенадцать";
		break;
	}
	case 13: case -13: {
		res1 = "тринадцать";
		break;
	}
	case 14: case -14: {
		res1 = "четырнадцать";
		break;
	}
	case 15: case -15: {
		res1 = "пятнадцать";
		break;
	}
	case 16: case -16: {
		res1 = "шестнадцать";
		break;
	}
	case 17: case -17: {
		res1 = "семнадцать";
		break;
	}
	case 18: case -18: {
		res1 = "восемнадцть";
		break;
	}
	case 19: case -19: {
		res1 = "девятнадцать";
		break;
	}
	case 0: {
		res1 = "ноль";
		break;
	}
	case 1: case -1: {
		res1 = "один";
		break;
	}
	case 2: case -2: {
		res1 = "два";
		break;
	}
	case 3: case -3: {
		res1 = "три";
		break;
	}
	case 4: case -4: {
		res1 = "четыре";
		break;
	}
	case 5: case -5: {
		res1 = "пять";
		break;
	}
	case 6: case -6: {
		res1 = "шесть";
		break;
	}
	case 7: case -7: {
		res1 = "семь";
		break;
	}
	case 8: case -8: {
		res1 = "восемь";
		break;
	}
	case 9: case -9: {
		res1 = "девять";
		break;
	}

	} 

	switch (num2) {
	case 90: case -90: {
		res2 = "девяносто";
		break;
	}

	case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99:
	case -91: case -92: case -93: case -94: case -95: case -96: case -97: case -98: case -99:
	{
		val2 = 90;
		int calc2 = num2 % val2;
		if (calc2 > 90 && calc2 < 100) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 98:
				s2 = "восемь";
				break;
			case 99:
				s2 = "девять";
				break;
			}

		}
		res2 = "девяносто " + s2;
		break;
	}
	case 80: case -80: {
		res2 = "восемьдесят";
		break;
	}

	case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89:
	case -81: case -82: case -83: case -84: case -85: case -86: case -87: case -88: case -89:
	{
		val2 = 80;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}

		}
		res2 = "восемьдесят " + s2;
		break;
	}
	case 70: case -70:{
		res2 = "семьдесят";
		break;
	}

	case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79:
	case -71: case -72: case -73: case -74: case -75: case -76: case -77: case -78: case -79:

	{
		val2 = 70;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}

		}
		res2 = "семьдесят " + s2;
		break;
	}
	case 60: case -60:{
		res2 = "шестьдесят";
		break;
	}

	case 61: case 62: case 63: case 64: case 65: case 66: case 67: case 68: case 69:
	case -61: case -62: case -63: case -64: case -65: case -66: case -67: case -68: case -69:
	{
		val2 = 60;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}

		}
		res2 = "шестьдесят " + s2;
		break;
	}
	case 50: case -50: {
		res2 = "пятьдесят";
		break;
	}

	case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59:
	case -51: case -52: case -53: case -54: case -55: case -56: case -57: case -58: case -59:
	{
		val2 = 50;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}

		}
		res2 = "пятьдесят " + s2;
		break;
	}
	case 40: case -40: {
		res2 = "сорок";
		break;
	}

	case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49:
	case -41: case -42: case -43: case -44: case -45: case -46: case -47: case -48: case -49:
	{
		val2 = 40;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}

		}
		res2 = "сорок " + s2;
		break;
	}
	case 30: case -30: {
		res2 = "тридцать";
		break;
	}

	case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39:
	case -31: case -32: case -33: case -34: case -35: case -36: case -37: case -38: case -39:
	{
		val2 = 30;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}
		}
		res2 = "тридцать " + s2;
		break;
	}
	case 20: case -20: {
		res2 = "двадцать";
		break;
	}

	case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29:
	case -21: case -22: case -23: case -24: case -25: case -26: case -27: case -28: case -29:
	{
		val2 = 20;
		int calc2 = num2 % val2;
		if (calc2 > val2 && calc2 < (val2 + 10)) {
			switch (calc2) {
			case 1:
				s2 = "один";
				break;
			case 2:
				s2 = "два";
				break;
			case 3:
				s2 = "три";
				break;
			case 4:
				s2 = "четыре";
				break;
			case 5:
				s2 = "пять";
				break;
			case 6:
				s2 = "шесть";
				break;
			case 7:
				s2 = "семь";
				break;
			case 8:
				s2 = "восемь";
				break;
			case 9:
				s2 = "девять";
				break;
			}
		}
		res2 = "двадцать " + s2;
		break;
	}

	case 10: case -10:{
		res2 = "десять";
		break;
	}
	case 11: case -11: {
		res2 = "одиннадцать";
		break;
	}
	case 12: case -12: {
		res2 = "двенадцать";
		break;
	}
	case 13: case -13: {
		res2 = "тринадцать";
		break;
	}
	case 14: case -14: {
		res2 = "четырнадцать";
		break;
	}
	case 15: case -15: {
		res2 = "пятнадцать";
		break;
	}
	case 16: case -16: {
		res2 = "шестнадцать";
		break;
	}
	case 17: case -17: {
		res2 = "семнадцать";
		break;
	}
	case 18: case -18: {
		res2 = "восемнадцть";
		break;
	}
	case 19: case -19: {
		res2 = "девятнадцать";
		break;
	}
	case 0: {
		res2 = "ноль";
		break;
	}
	case 1: case -1: {
		res2 = "один";
		break;
	}
	case 2:case -2: {
		res2 = "два";
		break;
	}
	case 3:case -3: {
		res2 = "три";
		break;
	}
	case 4:case -4: {
		res2 = "четыре";
		break;
	}
	case 5:case -5: {
		res2 = "пять";
		break;
	}
	case 6:case -6: {
		res2 = "шесть";
		break;
	}
	case 7:case -7: {
		res2 = "семь";
		break;
	}
	case 8:case -8: {
		res2 = "восемь";
		break;
	}
	case 9:case -9: {
		res2 = "девять";
		break;
	}

	}


	if (num1 < 100 && num1 > -100 && num2 < 100 && num2 > -100 ) {
		if (num1 > num2) {
			if (num2 < 0 && num1>0) {
				std::cout << " Результат : " << res1 << " больше, чем " << "минус " << res2 << endl;
			}
			else if (num1 < 0 && num2 < 0) {
				std::cout << " Результат : " << "минус " << res1 << " больше, чем " << "минус " << res2 << endl;
			}
			else {
				std::cout << " Результат : " << res1 << " больше, чем " << res2 << endl;
			}
		}
		else if (num1 < num2) {
			if (num1 < 0 && num2 > 0 ) {
				std::cout << " Результат : " << "минус " << res1 << " меньше, чем " << res2 << endl;
			}
			else if (num2 < 0 && num1 < 0) {
				std::cout << " Результат : " << "минус " << res1 << " меньше, чем минус " << res2 << endl;
			}
			else {
				std::cout << " Результат : " << res1 << " меньше, чем " << res2 << endl;
			}
		}
		else if (num1 == num2) {
			if (num1 < 0 && num2 < 0) {
				std::cout << " Результат : " << "минус " << res1 << " равно" << " минус " << res2 << endl;
			}
			else {
				std::cout << " Результат : " << res1 << " равно " << res2 << endl;
			}
		}
		else {
			std::cout << " Ошибка" << endl;
		}




	}
	else {
		std::cout << "Ошибка! Одно из чисел вне диапазона! \n";
	}


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
