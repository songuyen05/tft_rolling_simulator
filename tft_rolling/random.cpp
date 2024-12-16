#include "random.h"
#include <chrono>
#include <random>

namespace Random {
	int NTK(int n, int k) {
		static uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
		static std::seed_seq ss{ int(timeSeed & 0xffffffff), int(timeSeed >> 32) };
		static std::mt19937 mgen(ss);

		// check if user put n <= k to process boudns
		if (n <= k) {
			std::uniform_int_distribution<std::mt19937::result_type> ntkd(n, k);
			return ntkd(mgen);
		}
		else { // else n > k, still functions as bounds k to n
			std::uniform_int_distribution<std::mt19937::result_type> ntkd(k, n);
			return ntkd(mgen);
		}
	}
}