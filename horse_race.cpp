#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

const int number_of_horses = 5;
const int length_of_track = 15;

void printTrack(const vector<int>& positions) {
    system("clear");
    for (int outer_loop = 0; outer_loop < number_of_horses; outer_loop++) {
        for (int inner_loop = 0; inner_loop < length_of_track; inner_loop++) {
            if (positions[outer_loop] == inner_loop)
                cout << outer_loop;
            else
                cout << ".";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    vector<int> positions(number_of_horses, 0);
    bool repeat = false;
    int winner = -1;

    while (!repeat) {
        printTrack(positions);
        cout << "Press enter for another turn";
        cin.get();

        for (int i = 0; i < number_of_horses; i++){
            if (rand() % 2 == 1) { // Random movement
                positions[i]++;
            } // end of if statement
            if (positions[i] >= length_of_track - 1) {
                repeat = true;
                winner = i;
            } // end of if statement
        } // end of for loop
    } // end of the while repeat loop

    // show the winner
    printTrack(positions);
    cout << "Horse " << winner << " is the winner." << endl;
    return 0;
}
