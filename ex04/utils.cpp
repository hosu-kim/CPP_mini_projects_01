#include "sed_is_for_losers.hpp"

std::string replaceSubstring(const std::string& str, const std::string& from, const std::string to) {
	std::string result = str;
	size_t pos = 0;

	while ((pos = result.find(from, pos)) != std::string::npos) {
		result.erase(pos, from.length());
		result.insert(pos, to);
		pos += to.length();
	}

	return result;
}
