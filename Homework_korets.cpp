﻿// Homework1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	size_t Letter_pose, Letter_count;
	std::string s;
	cin >> s;
	s.insert(0, "a");
	s[0] = s.size()-1;
	//cout << "len: " << int(s[0]) << endl;
	s.insert(1, "a");
	s[1] = s[1] - 'a';
	s.push_back('.');
	s.push_back('\n');

	//cout << endl << "s: " << s << endl;

	for ( ; ; ){
		if ((s[int(s.at(1))]) == '.') break;
		if ((s[int(s[1])] == 'A') || (s[int(s[1]) ] == 'a')) {
			s.append("   * * * *   \n* *       * *\n* *       * *\n* * * * * * *\n* *       * *\n* *       * *\n"); // 14*6 символов в одной строке
		}//		      3456789        17
		if ((s[int(s[1])] == 'B') || (s[int(s[1])] == 'b')) {
			s.append("* * * * *    \n* *       * *\n* * * * *    \n* *       * *\n* *       * *\n* * * * * * *\n");
		}
		if ((s[int(s[1]) ] == 'C') || (s[int(s[1]) ] == 'c')) {
			s.append("    * * *    \n* *       * *\n* *          \n* *          \n* *       * *\n  * * * * *  \n");
		}
		if ((s[int(s[1]) ] == 'D') || (s[int(s[1]) ] == 'd')) {
			s.append("* * * * *    \n* *       * *\n* *       * *\n* *       * *\n* *       * *\n* * * * * *  \n");
		}
		if ((s[int(s[1]) ] == 'E') || (s[int(s[1]) ] == 'e')) {
			s.append("* * * * * * *\n* *          \n* * * * * *  \n* *          \n* *          \n* * * * * * *\n");
		}
		if ((s[int(s[1]) ] == 'F') || (s[int(s[1]) ] == 'f')) {
			s.append("* * * * * * *\n* *          \n* * * * * *  \n* *          \n* *          \n* *          \n");
		}
		if ((s[int(s[1]) ] == 'G') || (s[int(s[1]) ] == 'g')) {
			s.append("    * * *    \n* *       * *\n* *          \n* *     * * *\n* *       * *\n  * * * * *  \n");
		}
		if ((s[int(s[1]) ] == 'H') || (s[int(s[1]) ] == 'h')) {
			s.append("* *       * *\n* *       * *\n* * * * * * *\n* *       * *\n* *       * *\n* *       * *\n");
		}
		if ((s[int(s[1]) ] == 'I') || (s[int(s[1]) ] == 'i')) {
			s.append("* * * * * * *\n      *      \n      *      \n      *      \n      *      \n* * * * * * *\n");
		}
		if ((s[int(s[1])] == 'J') || (s[int(s[1])] == 'j')) {
			s.append("* * * * * * *\n          * *\n          * *\n          * *\n* *       * *\n  * * * *    \n");
		}
		if ((s[int(s[1])] == 'K') || (s[int(s[1])] == 'k')) {
			s.append("* *       * *\n* *     *    \n* * * *      \n* *   * *    \n* *     * *  \n* *       * *\n");
		}
		if ((s[int(s[1])] == 'L') || (s[int(s[1])] == 'l')) {
			s.append("* *          \n* *          \n* *          \n* *          \n* *          \n* * * * * * *\n");
		}
		if ((s[int(s[1]) ] == 'M') || (s[int(s[1]) ] == 'm')) {
			s.append("*           *\n* * *   * * *\n* *   *   * *\n* *       * *\n* *       * *\n* *       * *\n");
		}
		if ((s[int(s[1]) ] == 'N') || (s[int(s[1]) ] == 'n')) {
			s.append("* *       * *\n* * * *   * *\n* *   *   * *\n* *     * * *\n* *       * *\n* *         *\n");
		}
		if ((s[int(s[1]) ] == 'O') || (s[int(s[1]) ] == 'o')) {
			s.append("* * * * * * *\n* *       * *\n* *       * *\n* *       * *\n* *       * *\n* * * * * * *\n");
		}
		if ((s[int(s[1]) ] == 'P') || (s[int(s[1]) ] == 'p')) {
			s.append("* * * * * * *\n* *       * *\n* *       * *\n* * * * * * *\n* *          \n* *          \n");
		}
		if ((s[int(s[1]) ] == 'Q') || (s[int(s[1]) ] == 'q')) {
			s.append("* * * * * * *\n* *       * *\n* *       * *\n* *       * *\n* * * * * *  \n          * *\n");
		}
		if ((s[int(s[1]) ] == 'R') || (s[int(s[1]) ] == 'r')) {
			s.append("* * * * * * *\n* *       * *\n* * * * * * *\n* * * *      \n* *     * *  \n* *       * *\n");
		}
		if ((s[int(s[1]) ] == 'S') || (s[int(s[1]) ] == 's') ){
			s.append("  * * * * * *\n* *          \n* *          \n  * * * * * *\n          * *\n* * * * * * *\n");
		}
		if ((s[int(s[1]) ] == 'T') || (s[int(s[1]) ] == 't')) {
			s.append("* * * * * * *\n      *      \n      *      \n      *      \n      *      \n      *      \n");
		}
		if ((s[int(s[1]) ] == 'U') || (s[int(s[1]) ] == 'u')) {
			s.append("* *       * *\n* *       * *\n* *       * *\n* *       * *\n* *       * *\n  * * * * *  \n");
		}
		if ((s[int(s[1]) ] == 'V') || (s[int(s[1]) ] == 'v')) {
			s.append("* *       * *\n* *       * *\n* *       * *\n  * *   * *  \n    *   *    \n      *      \n");
		}
		if ((s[int(s[1] )] == 'W') || (s[int(s[1]) ] == 'w')) {
			s.append("*           *\n*           *\n*     *     *\n*   *   *   *\n* *       * *\n*           *\n");
		}
		if ((s[int(s[1]) ] == 'X') || (s[int(s[1]) ] == 'x')) {
			s.append("* *       * *\n  * *   * *  \n    *   *    \n      *      \n  * *   * *  \n* *       * *\n");
		}
		if ((s[int(s[1]) ] == 'Y') || (s[int(s[1]) ] == 'y')) {
			s.append("* *       * *\n  *       * *\n    * *   * *\n        * *  \n      * *    \n    * *      \n");
		}
		if ((s[int(s[1]) ] == 'Z') || (s[int(s[1]) ] == 'z')) {
			s.append("* * * * * * *\n          * *\n      * * *  \n  * * *      \n* *          \n* * * * * * *\n");
		}
		s.push_back('\n');
		s[1] = (s[1] + 1);
	};
	s.push_back(s[0]);      
	s.erase(0,1);
	/*
	s.insert(1, "a"); //счетчик на позиции 2
	s.insert(1, "a"); //счетчик на позиции 1
	s.insert(1, "a"); //счетчик на позиции 0
	s.at(1) = s[1] - 'a'+1;
	cout << s[1] << '\n';
	s.at(1) = s[1]+3+s[3]+14;
	s.at(2) = s[1] + 3 + s[3] + 70*s[0];
	*/
	//while (s[0] < s[3]) {
	//	s.insert(int(s[2]), s, int(s[1]), 14);
	//	s[0] = s[0] + 1;
	//}
	//
	s.erase(0, (s.find('.') + 1));

	//s.insert(0, "a");

	//cout << s;
	//cout << "\n Len: " << int(s[s.size()-1]) << endl;
	
	s[0] = 0;
	s[1] = 0;
	//s[2] = 3;
	s.push_back('.');
	/*
	while(s[0] < 6) {
		while(s[1] < s[s.size()-2]) {
			//14*s[0]+3
			//<<13 << "  ";
			// + 84
			cout << s.substr(14*s[0]+3 + s[1]*85, 13) << "  ";
			//cout << "here";
			s[1]++;
		}
		cout << "\n";
		s[0]++;
		s[1] = 0;
	}
	*/
	s[0] = 0;
	s[1] = 0;
	s[2] = s[s.size()-2];
	//s.push_back('.');
	while(s[0] < 6) {
		while(s[1] < s[2]) {
			//14*s[0]+3
			//<<13 << "  ";
			// + 84
			s.append(s.substr(14*s[0]+3 + s[1]*85, 13));
			s.append("  ");
			//cout << s.substr(14*s[0]+3 + s[1]*85, 13) << "  ";
			//cout << "here";
			s[1]++;
		}
		s.push_back('\n');
		//cout << "\n";
		s[0]++;
		s[1] = 0;
	}


	//cout << "\n____________________________\n";
	s.erase(0, (s.find('.') + 1));
	cout << s;


	//cout << "letter: " << s[3];
	

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
