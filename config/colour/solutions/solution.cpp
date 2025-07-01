#include <iostream>
#include <set>
#include <vector>

int count_unique_colors(const std::vector<int>& colors) {
    std::set<int> unique_colors(colors.begin(), colors.end());
    return unique_colors.size();
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> colors(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> colors[i];
    }
    std::cout << count_unique_colors(colors) << std::endl;
    return 0;
}