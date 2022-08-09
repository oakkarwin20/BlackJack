#include <iostream>
#include <time.h>

using namespace std;

/*                          things to do
 
 1. take input for joker card, let player choose any number between 1-13
 
 2. take input for Ace card, let player choose between 1 or 10
 
 */

//Variables
//---------------------
int cardNumber1;
int cardNumber2;
int cardNumber3;
int cardNumber4;
int cardNumber5;
int cardNumberTotal;

char playerIntput = ' ';

int wallet = 100;
int bet;
int prizeMoney;
//---------------------

//               BlackJack Title Ascii Art function
//------------------------------------------------------------
int title() {
    
    cout << " _______     _____             ___           ______       ____   ___      ___________       ___            ______      ____    ___   " << endl;
    cout << " |  _   ||   |  | |           / \\ \\        /  ___  \\ \\    |  |  /  //     |___   ___|/     /  \\ \\        /  ___  \\ \\   |  |  /  //  " << endl;
    cout << " | |_|  ||   |  | |          /   \\ \\      /  /   \\__\\ \\   |  | /  //          |  ||       /    \\ \\      /  /   \\__\\ \\  |  | /  //   " << endl;
    cout << " |______||   |  | |         /  /\\ \\ \\    |  |             |  |/  //           |  ||      /  /\\  \\ \\    |  |            |  |/  //    " << endl;
    cout << " |  ___  ||  |  | |___     /  ___\\ \\ \\   |  |     ___     |  |\\  \\\\     ___   |  ||     /  ___\\  \\ \\   |  |     ___    |  |\\  \\\\    " << endl;
    cout << " | |___| ||  |  |____/|   /  //  \\  \\ \\   \\  \\___/  / /   |  | \\  \\\\    \\ \\___/  ||    /  //   \\  \\ \\   \\  \\___/  / /  |  | \\  \\\\   " << endl;
    cout << " |_______|/  |_______|/  /__//    \\__\\/    \\ ______/_/    |__|  \\__\\\\    \\______ //   /__//     \\__\\/    \\ ______/ /   |__|  \\__\\\\ " << endl;
    
    return 0;
}
//------------------------------------------------------------

//                   Card Ascii Art function
//------------------------------------------------------------
//card number #1 Ascii Art
int C1AA() {
    
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 1       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       1 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 2){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 2       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       2 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 3){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 3       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       3 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 4){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 4       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       4 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 5){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 5       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       5 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 6){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 6       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       6 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 7){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 7       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       7 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 8){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 8       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       8 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 9){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 9       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       9 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 10){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 10      |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|      10 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 11){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| J       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       J |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 12){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| Q       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       Q |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 13){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| K       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       K |" << endl;
        cout << "|_________|" << endl;
    }
    /* need to figure out how to make cardNumber = Ace or Joker
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| A       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       A |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|  JOKER  |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|_________|" << endl;
    }
    */
    
    return 0;
}

//card number #2 Ascii Art
int C2AA() {
    
    if (cardNumber2 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 1       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       1 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 2){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 2       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       2 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 3){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 3       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       3 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 4){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 4       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       4 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 5){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 5       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       5 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 6){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 6       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       6 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 7){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 7       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       7 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 8){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 8       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       8 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 9){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 9       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       9 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 10){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 10      |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|      10 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 11){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| J       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       J |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 12){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| Q       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       Q |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 13){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| K       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       K |" << endl;
        cout << "|_________|" << endl;
    }
    /* need to figure out how to make cardNumber = Ace or Joker
    if (cardNumber2 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| A       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       A |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber2 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|  JOKER  |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|_________|" << endl;
    }
    */
    
    return 0;
}

//card number #3 Ascii Art
int C3AA() {
    
    if (cardNumber3 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 1       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       1 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 2){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 2       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       2 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 3){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 3       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       3 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 4){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 4       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       4 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 5){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 5       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       5 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 6){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 6       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       6 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 7){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 7       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       7 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 8){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 8       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       8 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 9){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 9       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       9 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 10){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 10      |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|      10 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 11){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| J       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       J |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 12){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| Q       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       Q |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber3 == 13){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| K       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       K |" << endl;
        cout << "|_________|" << endl;
    }
    /* need to figure out how to make cardNumber = Ace or Joker
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| A       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       A |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|  JOKER  |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|_________|" << endl;
    }
    */
    
    return 0;
}

//card number #4 Ascii Art
int C4AA() {
    
    if (cardNumber4 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 1       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       1 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 2){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 2       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       2 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 3){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 3       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       3 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 4){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 4       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       4 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 5){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 5       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       5 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 6){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 6       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       6 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 7){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 7       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       7 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 8){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 8       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       8 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 9){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 9       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       9 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 10){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 10      |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|      10 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 11){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| J       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       J |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 12){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| Q       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       Q |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber4 == 13){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| K       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       K |" << endl;
        cout << "|_________|" << endl;
    }
    /* need to figure out how to make cardNumber = Ace or Joker
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| A       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       A |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|  JOKER  |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|_________|" << endl;
    }
    */
    
    return 0;
}

//card number #5 Ascii Art
int C5AA() {
    
    if (cardNumber5 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 1       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       1 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 2){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 2       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       2 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 3){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 3       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       3 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 4){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 4       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       4 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 5){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 5       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       5 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 6){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 6       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       6 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 7){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 7       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       7 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 8){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 8       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       8 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 9){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 9       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       9 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 10){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| 10      |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|      10 |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 11){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| J       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       J |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 12){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| Q       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       Q |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber5 == 13){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| K       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       K |" << endl;
        cout << "|_________|" << endl;
    }
    /* need to figure out how to make cardNumber = Ace or Joker
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "| A       |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|       A |" << endl;
        cout << "|_________|" << endl;
    }
    if (cardNumber1 == 1){
        cout << "___________" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|  JOKER  |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|_________|" << endl;
    }
    */
    
    return 0;
}
//------------------------------------------------------------

//                   Win/Lose logic function
//------------------------------------------------------------
bool winLoseLogic(){
    
    if (cardNumberTotal > 21){
        cout << "\nGAME-OVER\n" << endl;
        return true;
    }
    else if(cardNumberTotal == 21) {
        cout << "\nBLACK-JACK!!!\n" << endl;
        return true;
    }
    else {
        return false;
    }
    
    return false;
}
//------------------------------------------------------------

int main(){
    srand((int)time(NULL));
    
    title();
    cout << "\nWallet: " << wallet << endl;
    cout <<  "How much would you like to bet?" << endl;
    cin >> bet;
    wallet =  wallet - bet;
    
    cout << "\nWallet: " << wallet << endl;
    
    //game starts, you see your 2 cards
    cardNumber1 = rand() % 13 + 1;
    cardNumber2 = rand() % 13 + 1;
    cardNumberTotal = (cardNumber1 + cardNumber2);
    
    C1AA();
    C2AA();
    
    cout << "Total =  " << cardNumberTotal << endl;
    
    winLoseLogic();
    
    cout << "\n'h' to Hit | 'f' to Fold | 'b' to Bet\n" << endl;
    cin >> playerIntput;

    /*
    if (playerIntput = 'h'){
        
    }
    if (playerIntput = 'f'){
        
    }
    if (playerIntput = 'b'){
        
    }
    */
    
    return 0;
    
    //bet option
    
    
    //fold option
}


