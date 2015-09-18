/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 18 Сентябрь 2015 г., 13:03
 */

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	short i, l;
	int  p;
	double num;
	while (stream >> num) {
		//cout << "Угол: " << num;
		p = num/(1.0/3600);
		//cout << " Количество секунд: " << p;
		cout << p/3600 << '.';
		p %= 3600;
		printf("%02d\'", p/60);
		p %= 60;
		printf("%02d\"\n", p);
//		cout << p/3600 << '.';
//		p = p - p/3600;
//		cout << p << 'r' << endl;
		//printf("%d.%02d'%02d\"\n", p/3600, (p-p/3600)/60, (p-p/3600-p/60)%60);
//		num = 0.0;
//		l = line.length();
//		for (i = 0; line[i] != '.'; i++){}
//		cout << line.substr(0, i+1);
//		p = 100000000;
//		num = 0;
//		for (i += 1; i < l; i++) {
//			num += (line[i]-48)*p;
//			p /= 10;
//		}
//		p = num / 277778;
//		printf("%02d'%02d\"\n",p/60, p%60);
		//cout << p/60 << '\'' << p%60 << "\"\n";
		//cout << num;
		//cout << endl << line << endl;
	}
	return 0;
}
//123456789
//399918330÷277778
//000277778