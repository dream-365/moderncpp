#include "stdafx.h"
#include <ppl.h>
#include <array>
#include <sstream>
#include <iostream>

using namespace Concurrency;
using namespace std;

int wmain()
{
	// Print each value from 1 to 5 in parallel.
	parallel_for(1, 6, [](int value) {
		wstringstream ss;
		ss << value << L' ';
		wcout << ss.str();
	});

	return 0;
}