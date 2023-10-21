#pragma once

enum State
{
	INVALID = -1,
	DEAD,
	LIVE
};

class Cell
{
public:

	Cell();
	~Cell();

	void Update(const std::vector<Cell>& cells, int cx, int cy);
	State GetState() const;

private:

	State m_State;
	State m_NextState;
};

