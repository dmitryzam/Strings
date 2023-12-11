#include<iostream>
#include<string>	// Библиотека, содержащая в себе функции и методы класса std::string.
// Урок 49. Модуль 7. Тема "Строки".

// Строка - массив символов.


int main() {
	system("chcp 1251>null");	// команда ввода и вывода рускких букв. Также можно использовать кодировку 65001.
	// system("cls");			// очистка содержимого консоли.
	int n;

	// Строки С:
	
	char cstr[6]{ 'H', 'e', 'l', 'l', 'o', '\0'}; // "\0" - сигнал для остановки чтения cout.
	for (int i = 0; i < 5; i++)
		std::cout << cstr[i];
	std::cout << std::endl;

	std::cout << cstr << std::endl;

	// Строка - это некий упорядоченный набор символьных элементов, 
	// объединенных в массив, в конце которого распологается нуль-терминатор.

	char cstr2[] = "Hello World!";
	std::cout << cstr2 << std::endl;
	
	// Строки С++:
	
	// ООП - совокупность классов и объектов.
	std::string mystr;	// создание пустой строки (""), где mystr - строковая переменная.
	// Её можно создавать без инициализации.
	std::cout << mystr << std::endl;

	// Конструктор класса - это функция, вызываемая в момент создания объекта класса.
	// std::string - это класс, а объектом является mystr.

	mystr = "Hello World!";		// инициализации строковой переменной.
	std::cout << mystr << std::endl;

	// Конкатенация - это процесс слияния двух или более строк в одну новую.
	std::string mystr1 = "Green", mystr2 = "apple";
	std::string mystr3 = mystr1 + ' ' + mystr2 + '!';
	std::cout << mystr3 << std::endl;

	mystr2 += "...";
	std::cout << mystr2 << std::endl;
	
	// Ввод строки:
	
	std::string  name;
	std::cout << "Введите Имя -> ";
	// std::cin >> name;	// Проблема - ввод одного лишь слова!!
	std::getline(std::cin, name);	// 
	std::cout << "Привет, " << name << "!\n";
	
	std::cout << "Сколько Вам лет -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << "...\n";
	std::cout << "А кем ты работаешь? Ввод -> ";

	std::cin.ignore();	// чиним нашу программу из-за cin, после которого не работает std::getline.

	std::string job;
	std::getline(std::cin, job);
	std::cout << "Всегда хотел стать " << job << "!\n";
	

	// Урок 50. Модуль 7. МЕТОДЫ СТРОК.
	// Метод - это специальная функция, принадлежащая какому-либо объекту и применяемая исключительно этим объектом.
	
	std::string str = "Hello World!";

	// Виды методов строк:
	// Методы size и length, возвращающие длину строки
	//std::cout << str.size() << std::endl;		// 12
	//std::cout << str.length() << std::endl;	// 12

	// Метод insert (перевод - "вставка"), необходимы аргументы и этот метод типа void
	//str.insert(3, "###");
	//std::cout << str << std::endl;	// Hel###lo World!

	// Метод replace (перевод - "заменить"):
	//str.replace(3, 5, "!!!");		// можно в ковычках ничего не указывать для удаления лишних букв.
	//std::cout << str << std::endl;	// Hel!!!rld

	// Методы find и rfind, реализующие линейный поиск внутри строки:
	//std::cout << str.find('l') << std::endl; // 2
	//std::cout << str.find('l', 5) << std::endl; // 2 // 5 - это позиция, с которой начинается поиск буквы "l".
	//std::cout << str.find("lo") << std::endl; // 3
	//std::cout << str.rfind('o') << std::endl; // 7 - ищет последний элемент.
	//std::cout << str.rfind('o', 5) << std::endl; // 7 - ищет последний элемент, но с позиции 5.

	// find и rfind используются для парсинга строк.

	// Метод substr, извлекающий подстроку из строки.
	//std::cout << str.substr(4) << std::endl; // o World - возвращает только с 4-го элемента.
	//std::cout << str.substr(3, 6) << std::endl; // lo Wor - возвращает в диапазоне позиций от 3-х до 6-ти.
	

	// Изменения регистра строки:
	std::string s1 = "Hello World!";
	for (int i = 0; i < s1.length(); i++)
		s1[i] = std::tolower(s1[i]);	// переводит все символы в нижний регистр
	std::cout << s1 << std::endl;

	for (int i = 0; i < s1.length(); i++)
		s1[i] = std::toupper(s1[i]);	// переводит все символы в верхнем регистре
	std::cout << s1 << std::endl;


	return 0;
}