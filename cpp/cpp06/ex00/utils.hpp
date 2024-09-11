#pragma once

#ifndef UTILS_DOT_HPP
#define UTILS_DOT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <climits>

bool isChar(const std::string& str);
bool isInt(const std::string& str);
bool isDouble(const std::string& str);
bool isFloat(const std::string& str);
void printResult(int c, float i, float f, double d);

#endif