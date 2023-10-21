#include "pch.h"
#include "Cell.h"

Cell::Cell()
{
	m_State = (State)GetRandomValue(DEAD, LIVE);
	m_NextState = INVALID;
}

Cell::~Cell()
{
}

void Cell::Update(const std::vector<Cell>& cells, int cx, int cy)
{
	if (m_NextState != INVALID)
		m_State = m_NextState;

	int neighborsCount = 0;
	for (int j = -1; j < 2; j++)
	{
		for (int i = -1; i < 2; i++)
		{
			int y = (cy + j + ROWS) % ROWS;
			int x = (cx + i + COLS) % COLS;

			//LIVE State = 1 and DEAD State = 0 so we can add the value of the state to increment the neighbors count
			if (x != cx || y != cy)
				neighborsCount += cells[y * COLS + x].GetState();
		}
	}

	if (GetState() == LIVE && (neighborsCount < 2 || neighborsCount > 3))
		m_NextState = DEAD;
	else if (GetState() == DEAD && neighborsCount == 3)
		m_NextState = LIVE;
	else
		m_NextState = m_State;
}

State Cell::GetState() const
{
	return m_State;
}
