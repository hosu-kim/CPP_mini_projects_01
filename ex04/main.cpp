#include "sed_is_for_losers.hpp"

// [X] 1. Create a program that takes three parameters in the following order:
//    a filename and two strings, s1 and s2.
// [ ] 2. It must open the file <filename> and copy its content into a new file <filename>.replace,
//    replacing every occurrence of s1 with s2.
// [ ] 3. Using C file manipulation functions is forbidden and will be considered cheating.
//     All the member functions of the class std::string are allowed, except replace.
int main(int argc, char* argv[]) {

	if (argc != 4)
		return (1);

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	
	std::ifstream file(filename.c_str());

	if (!file.is_open()) {
		std::cout << "Failed to open file.\n";
		return (1);
	}

	std::string replaced_str = replaceSubstring(filename, s1, s2);

	file.close();

	std::ofstream replace_file((filename + ".replace").c_str());

	if (!replace_file) {
		std::cout << "Failed to open file.\n";
		return (1);
	}

	replace_file << replaced_str;

	replace_file.close();

	return (0);
}

// std::string::find를 사용하면 문자열을 찾을 수 있음.
// std::string::replace는 금지되었으므로 구현해야 함.
// std::string::replace 구현
//   1. 동작 방식
//      - original.replace(pos, len, new_str);
//        1. pos: 교체를 시작할 위치
//        2. len: pos 위치에서부터 지울 문자의 개수
//        3. new_str: 지워진 자리에 새로 삽입될 문자