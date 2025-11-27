#include <string>

static bool isRunningCommand(std::string command) {
	return sizeof(command) < 3;
}
