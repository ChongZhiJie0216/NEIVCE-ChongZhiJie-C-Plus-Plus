#include <random>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include "random.h"

using namespace std;//std=java scanner



void random() {
    string exit;
    while (exit !="n"||exit !="N") {
        srand(time(0));//set random seed
        int min;
        int max;
        int count;

        string userInput{};
        cout << "Enter total set of random number:";
        getline(cin, userInput);
        count = stoi(userInput);

        userInput = "";
        cout << "Enter minimun number:";
        getline(cin, userInput);
        min = stoi(userInput);

        userInput = "";
        cout << "Enter maximun number:";
        getline(cin, userInput);
        max = stoi(userInput);

        vector<int> nums;
        nums.resize(count); // List<int> nums = new ArrayList(count);
        for (int i = 0; i < count; i++) {
            nums[i] = rand() % (max - min + 1) + min; // nums.add(gen(engine));
        }

        sort(nums.begin(), nums.end());

        for (const auto& i : nums) {
            cout << i << endl;
        }

        cout << "\n\nContinue? Y/N\n";
        cin >> exit;

    }
   
}
