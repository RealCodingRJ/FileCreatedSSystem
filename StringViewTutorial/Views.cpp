#include <iostream>
#include "fstream"
#include "Windows.h"
#include "StaticViews.cpp"
#include "BooleansCode.cpp"


using namespace std;

int main(int argc, char argv[]) {


	if (isRunningCommand(argv)) {

		if (sizeof(argc) == 0) {

		
			if (argv == "--ts") {

				const std::fstream file("main.ts");

				if (file.good()) {

					if (file.is_open()) {


						Sleep(1);

						std::cout << message("File was Created..") << std::endl;


					}

				}
		


				else if (argv == "--js") {

					const std::fstream file("main.js");

					if (file.good()) {
					
						if (file.is_open()) {


							Sleep(1);

							std::cout << message("File was Created..") << std::endl;

						}

					}
				}
			}

		}

	}

	system("pause > 0");
	return 0;
}