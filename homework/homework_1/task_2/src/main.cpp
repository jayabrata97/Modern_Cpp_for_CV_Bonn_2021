// @file      main.cpp
// @author    Jayabrata Chowdhury     [joyj03787@gmail.com]
//
// Copyright (c) 2022 Jayabrata Chowdhury, all rights reserved
#include <iostream>

#include "ipb_arithmetic.hpp"

using std::cout;
using std::endl;

int main() {
  const float x = 1.0;
  const float y = 2.0;
  cout << "The sum of " << x << "+" << y << " = " << MySum(x, y) << endl
       << "The sub of " << x << "-" << y << " = " << MySubtract(x, y) << endl;

  return 0;
}
