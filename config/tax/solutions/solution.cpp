#include <iostream>
#include <vector>

std::vector<std::string> detect_tax_evasion(const std::vector<std::pair<int, int>>& test_cases) {
    std::vector<std::string> results;
    for (const auto& case_pair : test_cases) {
        int reported = case_pair.first;
        int actual = case_pair.second;
        if (reported < 0.8 * actual) {
            results.push_back("Evasion");
        } else {
            results.push_back("No Evasion");
        }
    }
    return results;
}

int main() {
    int T;
    std::cin >> T;
    std::vector<std::pair<int, int>> test_cases(T);

    for (int i = 0; i < T; ++i) {
        std::cin >> test_cases[i].first >> test_cases[i].second;
    }

    std::vector<std::string> results = detect_tax_evasion(test_cases);

    for (const auto& result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}