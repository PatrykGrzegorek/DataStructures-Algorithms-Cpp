#include "head.h"

int main() {
	std::vector<double> result;
	double coins[] = { 0.01, 0.05, 0.10, 0.20, 0.50, 1, 2, 5, 10, 100, 200, 500 };
	int sizeCoins = sizeof(coins) / sizeof(coins[0]);
	minimalChangeCoin(13.13, result, coins, sizeCoins);
	for (int i = 0; i < result.size(); ++i) {
		std::cout << result[i] << " ";
	}

	return 0;
}