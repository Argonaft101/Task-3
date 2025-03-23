// task 3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string sex;
	string znak;

	bool znak1 = false;
	bool znak2 = false;
	bool znak3 = false;
	bool znak4 = false;
	bool znak5 = false;
	bool znak6 = false;
	bool znak7 = false;
	bool znak8 = false;
	bool znak9 = false;
	bool znak10 = false;
	bool znak11 = false;
	bool znak12 = false;
	
	
	
	int age = 0;
	string forecast;


	std::cout << " Введите пол: " << endl;
	std :: cin >> sex;
	std::cout << " Введите знак зодиака: " << endl;
	std::cin >> znak;
	std::cout << " Введите возраст: " << endl;
	cin >> age;


    if (znak == "овен") {
	znak1 = true;
	}
	else if (znak == "телец") {
		znak2=true;
	}
	else if (znak == "близнецы") {
		znak3=true;
	}
	else if (znak == "рак") {
		znak4 = true;
	}
	else if (znak == "лев") {
		znak5 = true;
	}
	else if (znak == "дева") {
		znak6 = true;
	}
	else if (znak == "весы") {
		znak7 = true;
	}
	else if (znak == "скорпион") {
		znak8 = true;
	}
	else if (znak == "стрелец") {
		znak9 = true;
	}
	else if (znak == "козерог") {
		znak10 = true;
	}
	else if (znak == "водолей") {
		znak11 = true;
	}
	else if (znak == "рыбы") {
		znak12 = true;
	}
	else {
		std::cout << " Введите верно название знака, попробуйте с маленькой буквы: " << endl;
	}

	if ((sex == "м")) {
		if (age < 40) {
			if (znak12 || znak4 || znak8) {
				forecast = "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
				std :: cout << " Ваше предсказание: " <<  forecast << endl;
			}
			else { 
				forecast = "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
				std::cout << " Ваше предсказание: " << endl;
				std::cout << forecast << endl;
			}
		}
		else {
			forecast = "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
			std :: cout << " Ваше предсказание: " << endl;
			std :: cout << forecast << endl;
		}
	}
	else if (sex == "ж") {
		if (age >= 15 && age<=32 ) {
			if (znak2 || znak6 || znak10) {
				forecast = "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
				std :: cout << " Ваше предсказание: " << endl;
				std :: cout << forecast << endl;
			}
			else {

				forecast = "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
				std::cout << " Ваше предсказание: " << endl;
				std::cout << forecast << endl;
			}
		}
		else {
			forecast = "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
			std::cout << " Ваше предсказание: " << endl;
			std::cout << forecast << endl;
		}
	}
	else {
		std::cout << " Введите верно название пола, с маленькой буквы, один знак: " << endl;
	}
	
	return 0;
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
