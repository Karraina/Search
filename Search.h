#pragma once
#ifndef LAPRAIRIE_SEARCH_H
#define LAPRAIRIE_SEARCH_H

#include <vector>

namespace searchdemo {
	int linearSearch(const std::vector<int>& nums, int target);
	int findFirst(const std::vector<int>& nums, int target);
	int countOcc(std::vector<int>& nums, int target);
}

#endif
