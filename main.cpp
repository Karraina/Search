#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "Search.h"

int main()
{
	std::vector<int> nums{ 15, 7, 4, 7, 1, 20, 7, 9 };

	std::cout << "Search Demo Program\n\n";
	std::cout << "Original vector: ";
	for (int n : nums)
	{
		 std::cout << n << " ";
	}
	std::cout << "\n";

	int target;
	std::cout << "Enter a number to search for: ";
	std::cin >> target;

	int linearIndex = searchdemo::linearSearch(nums, target);

	if (linearIndex != -1)
	{
		std::cout << "\nLinear Search: Found " << target << " at index " << linearIndex << "\n";
	}
	else
	{
		std::cout << "\nLinear Search: " << target << " Not Found\n";
	}

	std::sort(nums.begin(), nums.end());
	std::cout << "Sorted Vector: ";
	for (int n : nums){
		std::cout << n << " ";
	}
	std::cout << "\n\n";

	bool found = std:: binary_search(nums.begin(), nums.end(), target);
	if (found) {
		std::cout << "FOUND";
	} else {
		std::cout << "NOT FOUND";
	}
	std::cout << "\n\n";

	int first = searchdemo::findFirst(nums, target);
	if (first != -1)
	{
		std::cout << "First Occurrance of " << target << " is at position " << first + 1 << "\n";
	}

	int count = searchdemo::countOcc(nums, target);
	if (count > 0)
	{
		std::cout << target << " appears " << count << " times\n"; 
	} else {
		std::cout << target << "Does Not Appear\n";
	}

	int sum = std::accumulate(nums.begin(), nums.end(), 0);
	std::cout << "Total Of All Numbers: " << sum << "\n\n";

	auto min_it = std::min_element(nums.begin(), nums.end());
	auto max_it = std::max_element(nums.begin(), nums.end());
	std::cout << "Minimum = " << *min_it << "\n";
	std::cout << "Maximum = " << *max_it << "\n\n";

	int greaterThanTarget = std::count_if(nums.begin(), nums.end(),
		[target](int n) { return n > target;}
	);

	std::cout << "Number greater Than " << target << " = " << greaterThanTarget << std::endl;

	return 0;
}
