#include "pch.h"
#include "World.h"

World::World()
{
}

World::~World()
{
}

void World::Init()
{
	SetRandomSeed((unsigned)time(NULL));
	m_Cells.resize(ROWS * COLS);
}

void World::UpdateAndRender()
{
	for (int j = 0; j < ROWS; j++)
	{
		for (int i = 0; i < COLS; i++)
		{
			m_Cells[j * COLS + i].Update(m_Cells, i, j);
			if (m_Cells[j * COLS + i].GetState() == LIVE)
				DrawRectangle(i * CELL_SIZE, j * CELL_SIZE, CELL_SIZE, CELL_SIZE, WHITE);
		}
	}
}
