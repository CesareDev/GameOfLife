#pragma once
#include "Cell.h"

class World
{
public:

	World();
	~World();

	void Init();
	void UpdateAndRender();

private:

	std::vector<Cell> m_Cells;
};

