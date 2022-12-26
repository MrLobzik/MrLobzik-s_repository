#include "includes/CodewarsTasks.hpp"

auto EvenOrOddTask(unsigned int num) -> string {
    return num % 2 == 0 ? "Even" : "Odd";
}

auto CountingSheepTask(vector<bool>& sheeps) -> int {
    int count = 0;
    for (auto it : sheeps) {
        if (it) {
            ++count;
        }
    }
    return count;
}

auto CountingSheepTask(list<bool>& sheeps) -> int {
    int count = 0;
    for (auto it : sheeps) {
        if (it) {
            ++count;
        }
    }
    return count;
}

auto CountingSheepTask(bool const* sheeps, size_t size) -> int {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (sheeps[i]) {
            ++count;
        }
    }
    return count;
}

auto CountTheMonkeysTask(int n) -> int* {
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }
    return arr;
}

auto SchoolPaperworkTask(int n, int m) -> int {
    return n < 0 || m < 0 ? 0 : n * m;
}

auto IsHeGonnaSurvie(int countBullets, int countDragons) -> bool {
    return countBullets >= countDragons * 2;
}

auto PolishAlphabetTask(wstring str) -> string {
    string result;
    for (auto ch : str) {
        switch (ch) {
        case L'ą': result += 'a'; break;
        case L'ć': result += 'c'; break;
        case L'ę': result += 'e'; break;
        case L'ł': result += 'l'; break;
        case L'ń': result += 'n'; break;
        case L'ó': result += 'o'; break;
        case L'ś': result += 's'; break;
        case L'ź': 
        case L'ż': result += 'z'; break;
        default: result += (char)ch;
        }
    }
    return result;
}

auto FindAllOccurrencesOfAnElementInAnArrayTask(vector<int>& arr, int num) -> vector<int>& {
    vector<int> res;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == num) {
            res.push_back(i);
        }
    }
    return res;
}

auto FindAllOccurrencesOfAnElementInAnArrayTask(int const* arr, unsigned int size, int num) -> int* {
    int* numPositions = new int[size];
    int numCount = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            numPositions[numCount] = i;
            ++numCount;
        }
    }
    int* res = new int[numCount];
    for (int i = 0; i < numCount; ++i) {
        res[i] = numPositions[i];
    }
    return res;
}

auto SumOfMinimums(vector<vector<int>> arr2d) -> int {
    int res = 0;
    for (auto it : arr2d) {
        res += *min(it.cbegin(), it.cend());
    }
    return res;
}

auto SumOfMinimums(int** arr2d, unsigned int m, unsigned int n) -> int {
    int res = 0;
    for (int i = 0; i < m; ++i) {
        int min = INT16_MAX;
        for (int j = 0; j < n; ++j) {
            if (arr2d[i][j] < min) {
                min = arr2d[i][j];
            }
        }
        res += min;
    }
    return res;
}