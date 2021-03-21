#pragma once

#include <iostream>
#include <thread>
#include <chrono>

using namespace std::literals::chrono_literals;

struct timerForFunction {
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;


	timerForFunction() {
		start = std::chrono::high_resolution_clock::now();
	}

	~timerForFunction() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer shows " << ms << "ms" << std::endl;
	}
};