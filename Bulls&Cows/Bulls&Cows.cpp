#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>


using namespace std;
int main() {


	string firstNum;
	string secondNum;
	int bulls = 0;
	int cows = 0;

	cout << "Input intended number: "; cin >> firstNum;
	cout << "Input second number: "; cin >> secondNum;

	while (firstNum.length() > 4 || secondNum.length() > 4) {
		cout << "Wrong value.Try again!";
		cin >> firstNum; cin >> secondNum;
	}

	for (int i = 0; i < firstNum.length(); i++) {
		if (firstNum[i] == secondNum[i]) {
			bulls++;
		}
		else {
			for (int j = 0; j < secondNum.length(); j++) {
				if (firstNum[i] == secondNum[j] && firstNum[j] != secondNum[j]) {
					cows++;
					secondNum[j] = ' ';
					break;
				}
			}
		}
	}
	cout << "Bulls: " << bulls << ", cows: " << cows;

}






