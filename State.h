#pragma once
#include <string>

class FState
{
public:
	FState();
	FState(int NewID, std::string NewName);

	int ID;
	std::string Name;
};

