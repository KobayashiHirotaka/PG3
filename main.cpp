#include <iostream>
#include <string>
#include <chrono>

int main()
{
	std::string a(100000, 'a');

	auto copyStart = std::chrono::system_clock::now();
	std::string copyA = a;

	auto copyEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro>elapsedCopy = copyEnd - copyStart;

	auto moveStart = std::chrono::system_clock::now();
	std::string moveA = std::move(a);

	auto moveEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro>elapsedMove = moveEnd - moveStart;

	std::cout << "100,000文字を移動とコピーで比較しました。" << std::endl;
	std::cout << "コピー: " << elapsedCopy.count() << "μs" << std::endl;
	std::cout << "移動: " << elapsedMove.count() << "μs" << std::endl;

	return 0;
}