#include <iostream>
#include <cstdlib>
#include <ctime>

const int number_of_horses = 5;
const int length_of_track = 15;

void printTrack(const int positions[]) {
    std::system("clear"); // Clears the console
    for (int outer_loop = 0; outer_loop < number_of_horses; outer_loop++) {
        for (int inner_loop = 0; inner_loop < length_of_track; inner_loop++) {
            if (positions[outer_loop] == inner_loop)
                std::cout << outer_loop;
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));
    int positions[number_of_horses] = {0};
    bool repeat = false;
    int winner = -1;

    while (!repeat) {
        printTrack(positions);
        std::cout << "Press enter for another turn";
        std::cin.get();

        for (int i = 0; i < number_of_horses; i++) {
            if (std::rand() % 2 == 1) { // Random do or do not move forward
                positions[i]++;
            }
            if (positions[i] >= length_of_track - 1) {
                repeat = true;
                winner = i;
            }
        }
    }

    // Show the winner
    printTrack(positions);
    std::cout << "Horse " << winner << " is the winner." << std::endl;
    return 0;
}