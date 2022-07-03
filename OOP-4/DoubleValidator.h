#pragma once
#include <iostream>

using namespace std;

static class DoubleValidator
{
public:

	static bool IsValuePositive(double value);

	static bool IsValueInRange(double value, double min, double max);

	static void AssertPositiveValue(double value);

	static void AssertValueInRange(double value, double min, double max);

};
