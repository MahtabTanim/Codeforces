//============================================================================
// Name        : First_Project.cpp
// Author      : Mahtab Hossain Tanim
// Version     :
// Copyright   : This is Written By Mahtab Hossain Tanim
// Description : Hello World in C++, Ansi-style
//G:\Java\Projects\First_Project\src\Output.txt
//============================================================================

#include <bits/stdc++.h>
#include <fstream>
#include <windows.h>
#include <Winuser.h>

using namespace std;

vector<int> primes;

bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void Process() {
	for (int i = 2; i <= 55; i++) {
		if (isPrime(i))
			primes.push_back(i);
	}
}

void Print(int c) {
	if (c)
		cout << "prime\n";
	else
		cout << "composite\n";
	cout.flush();
}
int main() {
	string s;
	Process();

	int sz = (int) primes.size();
	for (int i = 0; i < sz; i++) {
		cout << primes[i] << endl;
		cout.flush();
		cin >> s;
		if (s == "yes") {
			for (int j = 0; j < sz && (primes[i] * primes[j]) <= 100; j++) {
				cout << primes[i] * primes[j] << endl;
				cout.flush();
				cin >> s;
				if (s == "yes") {
					Print(0);
					return 0;
				}
			}
			Print(1);
			return 0;
		}
	}
	Print(1);
	return 0;
}
