#pragma once

#include <raylib.h>
#include <vector>
#include <time.h>

constexpr auto CELL_SIZE = 4;
constexpr auto SCREEN_W = 1280;
constexpr auto SCREEN_H = 720;
constexpr auto ROWS = SCREEN_H / CELL_SIZE;
constexpr auto COLS = SCREEN_W / CELL_SIZE;