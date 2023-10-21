#pragma once

#include <raylib.h>
#include <vector>
#include <time.h>

constexpr auto CELL_SIZE = 1;
constexpr auto SCREEN_W = 128;
constexpr auto SCREEN_H = 128;
constexpr auto ROWS = SCREEN_H / CELL_SIZE;
constexpr auto COLS = SCREEN_W / CELL_SIZE;