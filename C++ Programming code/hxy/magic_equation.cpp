#include<iostream>
#include <cstdio>
#include <stdlib.h>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	int N, count, sum1, sum2, SSUM1, SSUM2, tem, flag, tcount;
	vector<int> num2(5);
	vector<int> num1(10);
	count = 0;
	while (cin >> N) {
		count++;
		flag = 0;
		cout << "Case " << count << ':' << endl;
		for (sum2 = 99999; sum2 >=1234; sum2--) {
			tem = 5, tcount = 1;
			sum1 = sum2 * N;
			if (sum1 > 99999) continue;
			SSUM1 = sum1;
			SSUM2 = sum2;
			while (tem--) {
				num2[tem] = sum2 % 10;
				sum2 /= 10;
				num1[tem] = sum1 % 10;
				sum1 /= 10;
			}
			for (int i = 5; i < 10; ++i) {
				num1[i] = num2[i - 5];
			}
			sort(num1.begin(), num1.end());
			for (int i = 0; i < 9; ++i) {
				if (num1[i] == num1[i + 1]) {
					tcount = 0;
					break;
				}
			}
			sum2 = SSUM2;
			sum1 = SSUM1;
			if (tcount==1) {
				flag = 1;
				for (int i = 0; i < 5; ++i) {
					num2[i] = sum2 % 10;
					sum2 /= 10;
					num1[i] = sum1 % 10;
					sum1 /= 10;
				}
				cout << "    " << num1[4] << num1[3] << num1[2] << num1[1] << num1[0] << '/' << num2[4] << num2[3] << num2[2] << num2[1] << num2[0] << '=' << N << endl;
			}
			sum2 = SSUM2;
		}
		if (flag == 0) cout << "    " << "No such numbers" << endl;
	}
	return 0;
}