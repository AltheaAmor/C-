#include <iostream>

int main() {
    int hamburgers = 600;
    int rate = 12; // hamburgers per 2 minutes
    int time = 0; // time in minutes

    while (hamburgers > 0) {
        hamburgers -= rate;
        time += 2; // add 2 minutes for each delivery
    }

    int hours = time / 60; // convert minutes to hours
    int minutes = time % 60; // calculate remaining minutes

    std::cout << "It will take Gary " << hours << " hours and " << minutes << " minutes to deliver 600 hamburgers." << std::endl;

    return 0;
}
//This program uses a while loop to simulate Gary's delivery of hamburgers. The loop continues until the number of hamburgers remaining to be delivered is 0. Inside the loop, the number of hamburgers remaining is decremented by Gary's delivery rate (12 hamburgers per 2 minutes) and the time is incremented by 2 minutes for each delivery. Once the loop is finished, the total time is converted to hours and minutes using integer division and the modulus operator. The final result is then printed to the console using the std::cout statement.





