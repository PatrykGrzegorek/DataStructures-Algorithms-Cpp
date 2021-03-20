#include "head.h"

void minimalChangeCoin(double nominal, std::vector<double>& result, double coins[], double sizeCoins) {
	for (int i = sizeCoins - 1; i >= 0; --i) {
		while (nominal >= coins[i]) {
			nominal -= coins[i];
			result.push_back(coins[i]);
		}
		if (nominal < coins[0]) {
			break;
		};
	}
}