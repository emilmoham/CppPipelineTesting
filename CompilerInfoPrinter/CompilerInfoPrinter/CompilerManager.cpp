#include "CompilerManager.h"

CompilerManager::CompilerManager() {
	sFullVersion = std::to_string(_MSC_FULL_VER);
	sShortVersion = std::to_string(_MSC_VER);
}

std::string CompilerManager::GetFullVersion() {
	return sFullVersion;
}

std::string CompilerManager::GetShortVersion() {
	return sShortVersion;
}