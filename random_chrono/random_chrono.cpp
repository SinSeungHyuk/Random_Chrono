// random_chrono.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <map>
#include <chrono>
#include <iomanip>
using namespace std;


namespace ch = std::chrono;

int main()
{
	//random_device rd;
	//mt19937 gen(rd());

	//uniform_int_distribution<> dist(0, 1000);

	//for (int total = 1; total <= 1000000; total *= 10) {
	//	vector<int> random_numbers;
	//	random_numbers.reserve(total);

	//	ch::time_point<ch::high_resolution_clock> start =
	//		ch::high_resolution_clock::now();

	//	for (int i = 0; i < total; i++) {
	//		random_numbers.push_back(dist(gen));
	//	}

	//	ch::time_point<ch::high_resolution_clock> end =
	//		ch::high_resolution_clock::now();

	//	auto diff = end - start;
	//	cout << setw(7) << total << "개 난수 생성 걸린 시간: "
	//		<< ch::duration_cast<ch::seconds>(diff).count() << "us\n";
	//}

	vector<int> vec = { 2,3,4,5,6,7,8,9 };
	//int n = 1;
	//for (auto iter = vec.begin(); iter != vec.end();iter++) {
	//	n *= *iter;
	//}

	int n = 1;
	for_each(vec.begin(), vec.end(),
		[&n](int i) { n *= i; });

	cout << n <<endl;
}



//random_device rd;

//mt19937 gen(rd());

////uniform_int_distribution<int> dis(0, 99);
//normal_distribution<double> dist(0, 0.5);

//map<int, int> hist{};

//for (int i = 0; i < 10000; i++)
//    ++hist[round(dist(gen))];

//for (auto p : hist) {
//    cout << setw(2) << p.first << ' '
//        << string(p.second / 100, '*') << ' ' << p.second << endl;
//}