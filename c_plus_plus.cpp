#include <iostream>
#include <vector>
#include <set>

void zadanie2() {
	std::vector<std::pair<char, int>> sterz;
	std::cout << "Введите2" << std::endl;
	for (;1;) {
		char first;
		int second;
		std::cin >> first >> second;
		if (first != 'R' and first != 'G' and first != 'B') break;
		sterz.push_back({first, second});
		
	}
	for (std::pair<char, int> test : sterz) {
		std::cout << test.first << " " << test.second;
	}
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	/*std::vector<int> Birds;
	std::cout << "Введите1" << std::endl;
	for (int over_stns;1;over_stns = 0){
		std::cin >> over_stns;
		if (over_stns == 0) break;
		Birds.push_back(over_stns);
	}
	int stones = 10;
	std::vector<int> result;
	for (int i = 1;i <= stones;i++) {
		result.push_back(i);
	}
	std::set<int> res;
	int flag = 0;
	for (int stone: result) {
		flag = 0;
		for (int ptica : Birds) {
			if (stone % ptica == 0) flag = 1;
		}
		if (flag == 0) res.insert(stone);
	}
	for (int stone : res) {
		std::cout << stone << " ";
	}*/
	zadanie2();
 	return 0;
}