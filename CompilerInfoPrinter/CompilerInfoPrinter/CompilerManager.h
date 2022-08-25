#pragma once

#include <String>

class CompilerManager
{
public:
	CompilerManager();

	std::string GetFullVersion();
	std::string GetShortVersion();

private:
	std::string sFullVersion;
	std::string sShortVersion;
};

