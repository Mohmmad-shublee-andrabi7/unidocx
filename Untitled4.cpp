#include <iostream>
#include <vector>

int main() {
    // Input data: daily high temperatures
    std::vector<int> temps = {
        55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 78, 82, 88, 91,
        92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59
    };

    int hotDays = 0, pleasantDays = 0, coldDays = 0;

    for (int temp : temps) {
        if (temp >= 85) {
            hotDays++;
            std::cout << temp << " - Hot day\n";
        } else if (temp >= 60 && temp <= 84) {
            pleasantDays++;
            std::cout << temp << " - Pleasant day\n";
        } else {
            coldDays++;
            std::cout << temp << " - Cold day\n";
        }
    }

    std::cout << "\nSummary:\n";
    std::cout << "Number of hot days (85 or higher): " << hotDays << "\n";
    std::cout << "Number of pleasant days (60-84): " << pleasantDays << "\n";
    std::cout << "Number of cold days (less than 60): " << coldDays << "\n";

    return 0;
}
#include <iostream>
#include <vector>
#include <iomanip> // for std::fixed and std::setprecision

int main() {
    // Input data: daily high temperatures
    std::vector<int> temps = {
        55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 78, 82, 88, 91,
        92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59
    };

    int hotDays = 0, pleasantDays = 0, coldDays = 0;
    double sumTemps = 0.0;

    for (int temp : temps) {
        sumTemps += temp;

        if (temp >= 85) {
            hotDays++;
            std::cout << temp << " - Hot day\n";
        } else if (temp >= 60 && temp <= 84) {
            pleasantDays++;
            std::cout << temp << " - Pleasant day\n";
        } else {
            coldDays++;
            std::cout << temp << " - Cold day\n";
        }
    }

    double avgTemp = sumTemps / temps.size();

    std::cout << "\nSummary:\n";
    std::cout << "Number of hot days (85 or higher): " << hotDays << "\n";
    std::cout << "Number of pleasant days (60-84): " << pleasantDays << "\n";
    std::cout << "Number of cold days (less than 60): " << coldDays << "\n";
    std::cout << std::fixed << std::setprecision(2); // 2 decimal places
    std::cout << "Average temperature: " << avgTemp << "\n";

    return 0;
}
