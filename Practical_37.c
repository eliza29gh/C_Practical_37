/* ============================================================================
 * TITLE      : Practical 37 – Cricket Scoreboard (Match Statistics Solver)
 * STUDENT    : ELIZA DOMINIC PINTO
    NAME 
 * UID  NO.   : 2605038
 * ROLL NO.   : 37
 * CLASS      : FY BSc IT (First Year B.Sc. in Information Technology)
 * SESSION    : Academic Year 2026 – 2027
 * DEPT       : Department of Information Technology, St. Xavier's College.
 * ============================================================================
 */

#include <stdio.h>

int main() {
    // Step 1: Start the program.

    // Step 2: Declare an array of integers to store the runs of 11 players.
    int runs[11];

    // Step 3: Declare variables for team total score, highest score, half-centuries, and ducks, initializing totals and counts to 0.
    int team_score = 0;
    int highest_score = 0;
    int half_centuries = 0;
    int ducks = 0;
    int i;

    // Step 4: Loop 11 times to prompt the user and store the runs for each player into the array using the format "Player X : ".
    for (i = 0; i < 11; i++) {
        printf("Player %d : ", i + 1);
        scanf("%d", &runs[i]);
    }

    // Step 5: Set the initial highest score to the runs of the first player.
    highest_score = runs[0];

    // Step 6: Loop through the array of 11 players to evaluate match statistics.
    for (i = 0; i < 11; i++) {

        // Step 7: Add each player's runs to the team score.
        team_score += runs[i];

        // Step 8: If a player's runs are greater than the current highest score, update the highest score.
        if (runs[i] > highest_score) {
            highest_score = runs[i];
        }

        // Step 9: If a player's runs are 50 or more, increment the half-centuries count.
        if (runs[i] >= 50) {
            half_centuries++;
        }

        // Step 10: If a player's runs are exactly 0, increment the ducks count.
        if (runs[i] == 0) {
            ducks++;
        }
    }

    // Step 11: Print the match summary banner line "---------- MATCH SUMMARY ----------".
    printf("\n---------- MATCH SUMMARY ----------\n\n");

    // Step 12: Display the calculated match summary values (Team Score, Highest Score, Half Centuries, and Ducks) following the exact output sample layout.
    printf("Team Score : %d\n\n", team_score);
    printf("Highest Score : %d\n\n", highest_score);
    printf("Half Centuries : %d\n\n", half_centuries);
    printf("Ducks : %d\n\n", ducks);
    printf("-----------------------------------\n");

    // Step 13: End the program.
    return 0;
}
