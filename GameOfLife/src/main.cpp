#include "pch.h"
#include "World.h"

int main()
{
	InitWindow(SCREEN_W, SCREEN_H, "Game Of Life");
	SetTargetFPS(60);

	World world;
	world.Init();

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);

		world.UpdateAndRender();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
