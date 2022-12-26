#include <random>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include "random.h"

using namespace std;//std=java scanner
void random() {
    while (true) {
        srand(time(0));//set random seed
        int min = 0;
        int max = 0;
        int count = 0;
        char exit;

        std::string userInput{};
        std::cout << "Enter total set of random number:";
        std::getline(std::cin, userInput);
        count = std::stoi(userInput);

        userInput = "";
        std::cout << "Enter minimun number:";
        std::getline(std::cin, userInput);
        min = std::stoi(userInput);

        userInput = "";
        std::cout << "Enter maximun number:";
        std::getline(std::cin, userInput);
        max = std::stoi(userInput);

        std::vector<int> nums;
        nums.resize(count); // List<int> nums = new ArrayList(count);
        for (int i = 0; i < count; i++) {
            nums[i] = rand() % (max - min + 1) + min; // nums.add(gen(engine));
        }

        std::sort(nums.begin(), nums.end());

        for (const auto& i : nums) {
            cout << i << endl;
        }

        cout << "\n\nContinue? Y/N\n";
        cin >> exit;
        if (exit == 'N' || exit == 'n') {
            break;
        }
    }
}
