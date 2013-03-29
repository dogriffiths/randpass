/* @(#)randpass.h
 */

#ifndef _RANDPASS_H
#define _RANDPASS_H 1

int numbersAndChars(int x);
int numbersCharsAndSymbols(int x);

short TRIS1[26][26][26] = {{
/* A A */ {2, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 3, 2, 0, 0, 0, 0,
        0, 0, 0},
/* A B */ {37, 25, 2, 5, 38, 0, 0, 2, 46, 1, 0, 304, 0, 2, 49, 0, 0, 24,
        24, 0, 19, 0, 0, 0, 14, 0},
/* A C */ {26, 1, 64, 2, 107, 0, 1, 94, 67, 0, 173, 13, 5, 1, 35, 1, 13,
        32, 3, 114, 23, 0, 0, 0, 45, 0},
/* A D */ {35, 7, 3, 43, 116, 6, 3, 8, 75, 14, 1, 16, 25, 3, 44, 3, 1,
        35, 20, 1, 10, 25, 9, 0, 18, 0},
/* A E */ {2, 0, 2, 1, 0, 1, 3, 0, 0, 0, 0, 10, 0, 2, 3, 0, 0, 12, 6, 0,
        2, 0, 0, 0, 0, 0},
/* A F */ {5, 0, 0, 0, 14, 50, 2, 0, 3, 0, 2, 5, 0, 2, 7, 0, 0, 5, 1,
        39, 1, 0, 0, 0, 1, 0},
/* A G */ {30, 1, 0, 1, 182, 0, 42, 5, 30, 0, 0, 7, 9, 42, 51, 3, 0, 24,
        3, 0, 21, 0, 3, 0, 3, 0},
/* A H */ {12, 0, 0, 0, 20, 0, 0, 0, 3, 0, 0, 5, 4, 2, 13, 0, 0, 2, 0,
        0, 1, 0, 0, 0, 0, 0},
/* A I */ {2, 0, 10, 26, 2, 1, 10, 0, 2, 1, 2, 87, 13, 144, 0, 2, 0, 93,
        30, 23, 0, 3, 1, 0, 0, 0},
/* A J */ {4, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* A K */ {11, 0, 1, 1, 98, 1, 0, 1, 15, 0, 0, 3, 0, 0, 5, 1, 0, 3, 0,
        1, 2, 0, 3, 0, 8, 0},
/* A L */ {78, 20, 34, 45, 124, 21, 24, 5, 109, 0, 28, 237, 31, 3, 53,
        23, 0, 7, 16, 69, 29, 26, 5, 0, 26, 2},
/* A M */ {70, 57, 1, 1, 98, 3, 0, 1, 68, 0, 0, 3, 38, 2, 43, 69, 0, 3,
        14, 3, 12, 0, 2, 0, 14, 0},
/* A N */ {114, 6, 156, 359, 103, 8, 146, 12, 141, 2, 57, 4, 0, 89, 61,
        1, 4, 1, 124, 443, 29, 6, 1, 3, 28, 9},
/* A O */ {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 0, 0, 0, 3, 2, 2,
        2, 0, 0, 0, 0, 0},
/* A P */ {29, 3, 0, 1, 59, 1, 0, 86, 25, 0, 1, 14, 1, 1, 37, 94, 0, 9,
        22, 30, 8, 0, 0, 0, 9, 0},
/* A Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        14, 0, 0, 0, 0, 0},
/* A R */ {124, 64, 101, 233, 115, 12, 47, 5, 188, 3, 61, 55, 68, 34,
        46, 25, 6, 94, 48, 189, 5, 22, 5, 1, 172, 2},
/* A S */ {19, 3, 32, 0, 71, 0, 1, 81, 49, 0, 22, 3, 19, 2, 19, 34, 4,
        0, 152, 211, 12, 0, 1, 0, 17, 1},
/* A T */ {50, 3, 41, 2, 863, 4, 0, 144, 352, 0, 5, 14, 6, 3, 144, 0, 0,
        60, 13, 106, 57, 1, 5, 0, 8, 5},
/* A U */ {0, 5, 23, 35, 5, 5, 38, 1, 0, 1, 3, 33, 4, 23, 0, 4, 1, 35,
        52, 56, 0, 1, 0, 7, 0, 1},
/* A V */ {35, 0, 0, 1, 108, 0, 0, 0, 49, 0, 0, 1, 0, 0, 19, 0, 0, 0, 0,
        0, 3, 1, 0, 0, 6, 0},
/* A W */ {30, 10, 0, 4, 3, 6, 2, 2, 2, 0, 10, 13, 4, 15, 3, 0, 0, 6, 3,
        5, 0, 0, 0, 0, 2, 0},
/* A X */ {3, 0, 0, 0, 4, 0, 0, 0, 22, 0, 0, 1, 0, 0, 7, 2, 0, 0, 1, 1,
        0, 0, 3, 0, 3, 0},
/* A Y */ {11, 8, 1, 5, 16, 5, 1, 2, 2, 0, 0, 10, 7, 4, 13, 1, 0, 3, 5,
        7, 3, 0, 5, 0, 0, 0},
/* A Z */ {10, 0, 0, 1, 22, 0, 0, 0, 10, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
        2, 2, 0, 0, 0, 4, 11}},
/* B A */ {{0, 17, 74, 11, 1, 2, 19, 4, 8, 0, 10, 68, 7, 73, 1, 7, 0,
        110, 54, 55, 9, 1, 3, 1, 12, 1},
/* B B */ {7, 0, 0, 0, 16, 0, 0, 0, 10, 0, 0, 24, 0, 0, 9, 0, 0, 2, 3,
        0, 2, 0, 0, 0, 14, 0},
/* B C */ {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B D */ {2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 1, 0, 0,
        3, 0, 0, 0, 0, 0},
/* B E */ {51, 1, 14, 34, 18, 11, 16, 7, 9, 0, 1, 85, 5, 48, 2, 2, 2,
        199, 36, 41, 0, 4, 5, 1, 6, 2},
/* B F */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        2, 0, 0, 0, 0, 0},
/* B G */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B H */ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* B I */ {34, 8, 22, 21, 8, 3, 9, 1, 0, 3, 1, 50, 7, 45, 16, 4, 2, 29,
        22, 59, 4, 4, 0, 0, 0, 3},
/* B J */ {0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* B K */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B L */ {57, 0, 0, 0, 519, 0, 0, 0, 35, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
        0, 32, 1, 0, 0, 3, 0},
/* B M */ {0, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0},
/* B N */ {1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B O */ {62, 7, 4, 21, 3, 2, 9, 3, 8, 1, 1, 46, 8, 63, 58, 2, 0, 55,
        15, 20, 46, 6, 17, 10, 19, 0},
/* B P */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B R */ {110, 0, 0, 0, 77, 0, 0, 0, 100, 0, 0, 0, 0, 0, 78, 0, 0, 0,
        0, 0, 28, 0, 0, 0, 10, 0},
/* B S */ {0, 0, 6, 0, 16, 0, 0, 0, 7, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
        27, 2, 0, 0, 0, 0, 0},
/* B T */ {1, 0, 0, 0, 3, 1, 0, 0, 0, 0, 0, 4, 0, 0, 1, 0, 0, 3, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B U */ {0, 3, 21, 16, 3, 5, 14, 0, 12, 1, 2, 52, 7, 20, 2, 0, 1, 104,
        44, 54, 0, 0, 0, 3, 1, 5},
/* B V */ {0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B W */ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* B Y */ {1, 0, 0, 0, 3, 0, 1, 2, 0, 0, 0, 4, 0, 0, 0, 3, 0, 6, 8, 3,
        0, 0, 2, 0, 0, 2},
/* B Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* C A */ {{1, 47, 17, 33, 1, 3, 4, 5, 7, 1, 3, 120, 40, 120, 1, 59, 1,
        171, 60, 150, 19, 20, 1, 0, 5, 0},
/* C B */ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0,
        0, 0, 0, 0, 0, 0},
/* C C */ {23, 0, 0, 0, 22, 0, 0, 5, 13, 0, 0, 13, 0, 0, 26, 0, 0, 7, 0,
        0, 27, 0, 0, 0, 0, 0},
/* C D */ {1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* C E */ {23, 6, 4, 17, 6, 6, 1, 2, 13, 0, 0, 50, 12, 109, 7, 43, 0,
        76, 63, 22, 1, 0, 4, 0, 2, 1},
/* C F */ {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* C G */ {0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 4, 1, 0,
        1, 0, 0, 0, 0, 0},
/* C H */ {165, 10, 2, 3, 176, 4, 3, 1, 141, 0, 0, 26, 20, 16, 102, 1,
        0, 63, 8, 10, 44, 0, 13, 0, 20, 0},
/* C I */ {76, 15, 8, 33, 24, 16, 3, 0, 0, 0, 0, 38, 5, 45, 50, 28, 0,
        29, 38, 71, 6, 8, 0, 0, 0, 0},
/* C J */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* C K */ {17, 16, 2, 3, 90, 4, 1, 7, 20, 1, 1, 45, 8, 8, 12, 9, 0, 3,
        32, 6, 6, 0, 13, 0, 22, 0},
/* C L */ {95, 0, 0, 0, 84, 0, 0, 0, 50, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
        0, 34, 0, 0, 0, 3, 0},
/* C M */ {1, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* C N */ {2, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* C O */ {33, 16, 40, 22, 14, 10, 11, 12, 9, 1, 1, 101, 218, 421, 24,
        56, 2, 129, 37, 40, 86, 22, 25, 4, 4, 2},
/* C P */ {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* C Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        13, 0, 0, 0, 0, 0},
/* C R */ {101, 0, 0, 0, 112, 0, 0, 0, 75, 0, 0, 0, 0, 0, 88, 0, 0, 0,
        0, 1, 41, 0, 0, 0, 25, 0},
/* C S */ {0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 2, 0, 0, 0, 1, 2,
        0, 0, 0, 0, 0, 0},
/* C T */ {44, 0, 0, 0, 12, 2, 0, 0, 113, 0, 0, 0, 2, 0, 94, 0, 0, 46,
        0, 0, 42, 0, 1, 0, 3, 0},
/* C U */ {3, 12, 2, 6, 6, 6, 0, 0, 8, 0, 0, 102, 42, 10, 9, 15, 0, 72,
        51, 41, 1, 0, 0, 0, 0, 0},
/* C V */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* C W */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* C X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* C Y */ {5, 1, 20, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 2, 2, 4, 0, 3, 2, 9,
        0, 0, 0, 0, 0, 0},
/* C Z */ {2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* D A */ {{0, 7, 16, 7, 1, 2, 13, 6, 18, 0, 3, 54, 23, 59, 0, 10, 0,
        31, 6, 40, 8, 13, 3, 0, 32, 3},
/* D B */ {9, 0, 0, 0, 7, 0, 0, 0, 3, 0, 0, 2, 0, 0, 8, 0, 0, 1, 0, 0,
        8, 0, 0, 0, 2, 0},
/* D C */ {5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0,
        2, 0, 0, 0, 0, 0},
/* D D */ {8, 0, 0, 0, 30, 0, 0, 3, 19, 0, 0, 38, 0, 0, 4, 0, 0, 4, 0,
        0, 1, 0, 0, 0, 16, 0},
/* D E */ {34, 37, 82, 14, 17, 41, 11, 4, 5, 2, 0, 88, 62, 170, 14, 40,
        4, 183, 99, 39, 6, 20, 16, 6, 1, 2},
/* D F */ {6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 2, 0, 0, 5, 0, 0, 2, 0, 0,
        4, 0, 0, 0, 0, 0},
/* D G */ {4, 0, 0, 0, 73, 0, 0, 0, 2, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0,
        2, 0, 1, 0, 3, 0},
/* D H */ {8, 0, 0, 0, 9, 0, 0, 0, 4, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* D I */ {100, 10, 104, 12, 33, 26, 31, 1, 1, 0, 1, 22, 22, 65, 57, 15,
        0, 20, 138, 53, 20, 31, 1, 6, 0, 1},
/* D J */ {4, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
        7, 0, 0, 0, 0, 0},
/* D K */ {0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* D L */ {9, 0, 0, 0, 79, 0, 0, 0, 12, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 3, 0},
/* D M */ {13, 0, 0, 0, 3, 0, 0, 0, 21, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0},
/* D N */ {7, 0, 0, 0, 9, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 6,
        0, 0, 0, 0, 0, 0},
/* D O */ {1, 5, 21, 10, 6, 3, 20, 1, 3, 0, 0, 30, 38, 54, 17, 7, 0, 39,
        11, 10, 30, 5, 54, 5, 1, 3},
/* D P */ {6, 0, 0, 0, 1, 0, 0, 1, 3, 0, 0, 1, 0, 0, 7, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* D Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        3, 0, 0, 0, 0, 0},
/* D R */ {74, 0, 0, 0, 47, 0, 0, 0, 53, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
        0, 22, 0, 0, 0, 8, 0},
/* D S */ {1, 0, 3, 0, 10, 0, 0, 9, 5, 0, 1, 3, 10, 0, 16, 8, 0, 0, 0,
        31, 1, 0, 2, 0, 0, 0},
/* D T */ {3, 0, 0, 0, 1, 0, 0, 6, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* D U */ {10, 7, 52, 2, 5, 3, 4, 0, 2, 0, 1, 33, 14, 15, 5, 11, 1, 19,
        15, 8, 1, 0, 0, 0, 0, 1},
/* D V */ {3, 0, 0, 0, 13, 0, 0, 0, 7, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* D W */ {19, 0, 0, 0, 10, 0, 0, 0, 19, 0, 0, 0, 0, 0, 8, 0, 0, 2, 0,
        0, 0, 0, 0, 0, 2, 0},
/* D X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* D Y */ {4, 2, 1, 2, 3, 1, 2, 0, 1, 0, 1, 4, 4, 12, 0, 0, 0, 0, 8, 1,
        0, 0, 1, 0, 0, 0},
/* D Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0}},
/* E A */ {{0, 39, 34, 110, 0, 12, 13, 3, 0, 0, 50, 68, 38, 71, 0, 13,
        1, 117, 80, 112, 28, 19, 7, 0, 0, 1},
/* E B */ {32, 5, 0, 0, 31, 0, 0, 0, 8, 0, 0, 6, 0, 0, 28, 0, 0, 32, 2,
        3, 29, 0, 0, 0, 4, 0},
/* E C */ {33, 0, 9, 2, 51, 0, 0, 39, 49, 0, 47, 26, 0, 0, 59, 0, 0, 35,
        2, 206, 42, 0, 0, 0, 2, 0},
/* E D */ {29, 7, 1, 16, 45, 5, 22, 3, 88, 0, 0, 8, 9, 4, 24, 2, 0, 27,
        8, 4, 27, 0, 7, 0, 13, 0},
/* E E */ {2, 4, 13, 63, 1, 6, 1, 4, 10, 0, 19, 23, 13, 66, 1, 42, 0,
        43, 9, 34, 1, 4, 6, 0, 0, 8},
/* E F */ {14, 0, 1, 2, 36, 33, 0, 0, 22, 0, 0, 15, 0, 0, 24, 0, 0, 14,
        1, 13, 35, 0, 0, 0, 5, 0},
/* E G */ {48, 1, 0, 0, 36, 1, 15, 2, 38, 0, 0, 7, 4, 4, 26, 0, 0, 38,
        0, 0, 19, 0, 0, 0, 4, 0},
/* E H */ {14, 0, 0, 0, 24, 0, 0, 0, 6, 0, 0, 0, 1, 0, 18, 0, 0, 4, 0,
        0, 4, 0, 0, 0, 3, 0},
/* E I */ {8, 0, 5, 13, 2, 1, 42, 0, 1, 1, 2, 13, 7, 59, 1, 1, 0, 10,
        25, 22, 0, 7, 0, 0, 0, 2},
/* E J */ {4, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        3, 0, 0, 0, 0, 0},
/* E K */ {2, 1, 0, 1, 6, 0, 0, 0, 4, 0, 0, 0, 0, 1, 1, 0, 0, 0, 2, 3,
        0, 0, 0, 0, 1, 0},
/* E L */ {76, 7, 6, 57, 131, 19, 7, 3, 125, 0, 4, 238, 22, 1, 48, 15,
        0, 4, 27, 26, 17, 19, 2, 0, 7, 0},
/* E M */ {87, 53, 1, 0, 84, 0, 0, 0, 102, 0, 0, 3, 8, 8, 56, 64, 0, 0,
        4, 0, 19, 0, 1, 0, 8, 0},
/* E N */ {78, 17, 68, 159, 128, 8, 35, 14, 96, 2, 2, 4, 5, 54, 57, 3,
        2, 9, 127, 624, 33, 10, 8, 0, 11, 16},
/* E O */ {0, 0, 8, 10, 0, 6, 7, 1, 2, 0, 0, 23, 10, 38, 0, 16, 0, 14,
        6, 4, 41, 3, 2, 2, 0, 1},
/* E P */ {26, 1, 1, 0, 27, 0, 0, 32, 45, 0, 0, 21, 1, 0, 35, 9, 0, 35,
        10, 65, 13, 0, 2, 0, 3, 0},
/* E Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        59, 0, 0, 0, 0, 0},
/* E R */ {217, 57, 66, 22, 190, 41, 70, 13, 200, 3, 14, 40, 134, 117,
        113, 42, 2, 123, 167, 135, 23, 58, 22, 1, 123, 1},
/* E S */ {17, 7, 74, 6, 58, 1, 3, 25, 82, 0, 3, 6, 17, 5, 34, 52, 7, 0,
        222, 278, 18, 2, 1, 0, 6, 0},
/* E T */ {78, 3, 19, 0, 129, 4, 0, 93, 105, 0, 1, 3, 2, 2, 50, 1, 0,
        73, 5, 113, 17, 0, 4, 0, 32, 4},
/* E U */ {0, 4, 7, 6, 1, 0, 4, 0, 0, 0, 2, 3, 17, 4, 0, 15, 0, 46, 20,
        18, 0, 2, 1, 0, 0, 0},
/* E V */ {29, 0, 0, 0, 121, 0, 0, 0, 56, 0, 0, 0, 0, 0, 26, 0, 0, 2, 1,
        0, 2, 2, 0, 0, 3, 1},
/* E W */ {33, 4, 3, 4, 16, 2, 0, 5, 24, 0, 0, 3, 3, 3, 23, 2, 0, 3, 15,
        4, 0, 0, 1, 0, 2, 0},
/* E X */ {29, 0, 43, 0, 20, 0, 0, 14, 21, 0, 0, 0, 0, 0, 15, 78, 1, 0,
        0, 72, 12, 0, 0, 1, 2, 0},
/* E Y */ {7, 3, 1, 4, 25, 2, 0, 2, 0, 0, 1, 4, 6, 4, 4, 1, 0, 2, 3, 0,
        0, 1, 4, 0, 0, 0},
/* E Z */ {1, 0, 0, 0, 9, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 1, 0, 0,
        1, 1, 0, 0, 2, 3}},
/* F A */ {{1, 10, 39, 5, 2, 1, 1, 3, 18, 0, 2, 35, 10, 27, 0, 0, 0, 36,
        13, 18, 10, 0, 2, 3, 4, 1},
/* F B */ {2, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F C */ {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F D */ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F E */ {18, 5, 24, 6, 12, 0, 2, 0, 6, 0, 1, 25, 6, 18, 2, 0, 0, 114,
        17, 15, 4, 2, 2, 0, 1, 0},
/* F F */ {10, 2, 0, 0, 51, 0, 0, 2, 45, 0, 0, 21, 4, 0, 13, 0, 0, 9, 7,
        0, 7, 0, 0, 0, 8, 0},
/* F G */ {1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F H */ {2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F I */ {9, 9, 58, 18, 42, 7, 11, 0, 0, 0, 0, 29, 2, 53, 0, 0, 0, 40,
        41, 18, 0, 2, 0, 10, 0, 3},
/* F J */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F K */ {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F L */ {64, 0, 0, 0, 50, 0, 0, 0, 21, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
        0, 42, 0, 0, 0, 15, 0},
/* F M */ {6, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F N */ {0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F O */ {5, 1, 8, 2, 1, 0, 7, 0, 6, 0, 0, 34, 1, 8, 32, 2, 0, 165, 5,
        0, 25, 1, 2, 7, 1, 0},
/* F P */ {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F R */ {64, 0, 0, 0, 66, 0, 0, 0, 35, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
        0, 11, 0, 0, 0, 3, 0},
/* F S */ {1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0},
/* F T */ {1, 1, 1, 0, 19, 0, 0, 3, 1, 0, 0, 0, 1, 0, 3, 0, 0, 1, 9, 0,
        0, 0, 4, 0, 8, 0},
/* F U */ {0, 0, 4, 2, 1, 0, 9, 0, 0, 2, 0, 119, 7, 24, 0, 0, 0, 28, 31,
        6, 0, 0, 0, 0, 0, 2},
/* F V */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F W */ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F Y */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* F Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* G A */ {{0, 20, 5, 11, 3, 2, 11, 3, 13, 0, 0, 68, 24, 60, 1, 5, 0,
        63, 23, 68, 15, 8, 5, 0, 2, 5},
/* G B */ {4, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G C */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G D */ {2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G E */ {23, 3, 2, 4, 12, 1, 1, 3, 4, 0, 0, 32, 8, 141, 39, 4, 0, 96,
        29, 33, 1, 1, 4, 0, 5, 0},
/* G F */ {0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
        3, 0, 0, 0, 0, 0},
/* G G */ {8, 0, 0, 0, 20, 0, 0, 1, 60, 0, 0, 24, 0, 0, 3, 1, 0, 6, 4,
        0, 0, 0, 0, 0, 12, 0},
/* G H */ {18, 4, 1, 1, 12, 2, 1, 1, 2, 0, 1, 4, 0, 3, 12, 1, 0, 1, 3,
        153, 2, 0, 3, 0, 1, 0},
/* G I */ {23, 21, 16, 6, 7, 2, 9, 0, 0, 0, 0, 24, 7, 103, 17, 1, 0, 10,
        26, 19, 3, 10, 0, 0, 0, 1},
/* G J */ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G K */ {0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G L */ {49, 0, 0, 0, 73, 0, 0, 0, 25, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
        0, 13, 0, 0, 0, 17, 0},
/* G M */ {23, 0, 0, 0, 12, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
        3, 0, 0, 0, 1, 0},
/* G N */ {26, 1, 0, 0, 28, 0, 0, 0, 20, 0, 0, 0, 0, 0, 26, 2, 0, 0, 0,
        1, 7, 0, 0, 0, 0, 0},
/* G O */ {6, 4, 3, 16, 6, 1, 10, 1, 5, 0, 0, 22, 1, 49, 20, 3, 0, 34,
        12, 23, 16, 7, 5, 0, 1, 0},
/* G P */ {0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G R */ {216, 0, 0, 0, 97, 0, 0, 0, 43, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
        0, 14, 0, 0, 0, 3, 0},
/* G S */ {2, 2, 0, 0, 0, 0, 0, 2, 2, 0, 1, 1, 0, 0, 2, 1, 0, 0, 0, 18,
        0, 0, 1, 0, 0, 0},
/* G T */ {2, 0, 0, 0, 0, 0, 0, 8, 3, 0, 0, 0, 0, 0, 17, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G U */ {28, 1, 1, 0, 49, 1, 1, 0, 41, 0, 0, 26, 15, 24, 2, 0, 0, 14,
        22, 6, 0, 0, 0, 0, 3, 1},
/* G V */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G W */ {5, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, 0},
/* G X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G Y */ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 3, 0, 6, 0, 5, 0, 0,
        0, 0, 0, 0, 0, 0},
/* G Z */ {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* H A */ {{2, 26, 15, 20, 6, 8, 22, 3, 31, 0, 11, 90, 66, 171, 3, 25,
        0, 142, 30, 49, 20, 11, 20, 0, 13, 8},
/* H B */ {4, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 2, 0, 0, 12, 0, 0, 2, 0, 0,
        4, 0, 0, 0, 1, 0},
/* H C */ {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H D */ {2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H E */ {123, 5, 22, 33, 37, 5, 3, 0, 27, 0, 0, 87, 65, 86, 17, 7, 1,
        311, 57, 42, 11, 11, 14, 8, 11, 2},
/* H F */ {2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        10, 0, 0, 0, 0, 0},
/* H G */ {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H H */ {1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H I */ {22, 22, 56, 15, 23, 6, 19, 0, 0, 1, 1, 73, 20, 79, 17, 41, 0,
        36, 53, 39, 3, 11, 0, 0, 0, 6},
/* H J */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H K */ {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H L */ {5, 0, 0, 0, 11, 0, 0, 0, 8, 0, 0, 0, 0, 0, 22, 0, 0, 1, 0, 0,
        1, 0, 0, 0, 1, 0},
/* H M */ {21, 0, 0, 0, 15, 0, 0, 0, 6, 0, 0, 0, 1, 0, 7, 0, 0, 0, 2, 0,
        1, 0, 0, 0, 0, 0},
/* H N */ {3, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 1, 3, 0, 0, 0, 4, 0,
        2, 0, 0, 0, 0, 0},
/* H O */ {13, 18, 13, 25, 17, 5, 13, 0, 7, 1, 4, 101, 62, 62, 44, 29,
        0, 130, 45, 33, 81, 8, 28, 0, 6, 2},
/* H P */ {3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* H Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* H R */ {20, 0, 0, 0, 23, 0, 0, 0, 40, 0, 0, 1, 0, 0, 72, 0, 0, 0, 0,
        0, 13, 0, 0, 0, 3, 0},
/* H S */ {3, 0, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 5,
        0, 0, 0, 0, 0, 0},
/* H T */ {3, 0, 2, 1, 21, 9, 1, 7, 5, 0, 0, 1, 4, 3, 4, 1, 0, 2, 7, 1,
        1, 0, 3, 0, 6, 0},
/* H U */ {3, 13, 7, 6, 3, 5, 12, 1, 0, 0, 0, 7, 37, 26, 0, 3, 0, 37,
        24, 15, 0, 0, 0, 2, 2, 1},
/* H V */ {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H W */ {17, 0, 0, 0, 5, 0, 0, 2, 5, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* H Y */ {5, 1, 1, 39, 1, 0, 3, 0, 1, 0, 0, 13, 9, 0, 0, 25, 0, 9, 29,
        9, 0, 0, 0, 1, 0, 0},
/* H Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* I A */ {{0, 33, 20, 8, 1, 0, 17, 5, 1, 0, 2, 169, 20, 230, 0, 3, 0,
        30, 13, 91, 0, 1, 1, 2, 0, 1},
/* I B */ {11, 19, 0, 0, 38, 0, 0, 0, 22, 0, 0, 131, 1, 2, 10, 0, 0, 20,
        1, 0, 23, 0, 0, 0, 2, 0},
/* I C */ {161, 0, 3, 0, 113, 0, 0, 62, 113, 0, 142, 15, 0, 4, 46, 0, 0,
        12, 5, 53, 42, 0, 0, 0, 7, 0},
/* I D */ {51, 2, 0, 31, 232, 0, 30, 0, 46, 1, 0, 5, 1, 8, 10, 1, 0, 1,
        10, 5, 11, 0, 7, 0, 9, 0},
/* I E */ {0, 1, 17, 6, 1, 16, 11, 1, 0, 0, 1, 52, 4, 70, 0, 1, 0, 66,
        18, 50, 7, 17, 6, 0, 0, 2},
/* I F */ {7, 0, 0, 0, 31, 45, 0, 0, 27, 0, 0, 9, 0, 1, 10, 0, 0, 2, 0,
        24, 10, 0, 0, 0, 71, 0},
/* I G */ {48, 0, 0, 0, 41, 0, 30, 147, 30, 0, 0, 4, 15, 57, 20, 1, 0,
        23, 3, 1, 15, 0, 1, 0, 2, 2},
/* I H */ {1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* I I */ {1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* I J */ {3, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* I K */ {6, 0, 0, 0, 17, 0, 0, 0, 3, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 1,
        2, 0, 0, 0, 1, 0},
/* I L */ {60, 10, 6, 36, 106, 6, 5, 7, 90, 0, 13, 253, 14, 0, 24, 1, 0,
        1, 10, 31, 6, 6, 5, 0, 10, 0},
/* I M */ {76, 26, 0, 0, 94, 1, 0, 1, 53, 0, 0, 1, 38, 1, 30, 133, 0, 1,
        8, 0, 17, 0, 0, 0, 2, 0},
/* I N */ {212, 12, 143, 168, 396, 83, 435, 26, 94, 8, 43, 9, 6, 44, 70,
        3, 10, 2, 139, 205, 35, 46, 4, 4, 15, 1},
/* I O */ {2, 2, 20, 10, 1, 0, 9, 0, 0, 0, 0, 28, 12, 604, 0, 8, 0, 25,
        13, 24, 139, 3, 2, 3, 0, 1},
/* I P */ {20, 5, 0, 0, 26, 2, 0, 16, 16, 1, 0, 33, 6, 0, 13, 39, 0, 5,
        19, 28, 5, 0, 1, 0, 1, 0},
/* I Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        36, 0, 0, 0, 0, 0},
/* I R */ {41, 2, 39, 24, 106, 7, 9, 0, 19, 0, 11, 20, 24, 1, 24, 8, 0,
        39, 11, 31, 3, 5, 8, 0, 10, 0},
/* I S */ {35, 5, 71, 4, 110, 4, 2, 189, 56, 1, 13, 12, 93, 5, 55, 33,
        3, 6, 85, 271, 4, 1, 1, 0, 8, 0},
/* I T */ {136, 1, 34, 1, 184, 5, 0, 77, 158, 0, 1, 4, 6, 5, 70, 1, 0,
        31, 2, 105, 72, 0, 1, 0, 142, 19},
/* I U */ {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 121, 1, 0, 0, 0, 1, 19,
        0, 0, 0, 0, 0, 0, 0},
/* I V */ {57, 0, 0, 0, 292, 0, 0, 0, 37, 0, 0, 0, 0, 0, 12, 0, 0, 1, 0,
        0, 3, 0, 0, 0, 2, 0},
/* I W */ {3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* I X */ {1, 0, 0, 0, 2, 1, 1, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 9,
        1, 0, 0, 0, 1, 0},
/* I Y */ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* I Z */ {9, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
        1, 1, 0, 0, 0, 16}},
/* J A */ {{0, 2, 32, 1, 1, 0, 3, 3, 2, 0, 3, 1, 8, 17, 0, 2, 0, 5, 2,
        0, 2, 3, 2, 1, 1, 2},
/* J B */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J C */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J D */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J E */ {4, 0, 24, 1, 1, 3, 0, 1, 0, 2, 0, 2, 0, 6, 2, 0, 0, 11, 9, 5,
        0, 0, 6, 0, 0, 0},
/* J F */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J G */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J H */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J I */ {0, 1, 0, 0, 0, 1, 4, 0, 0, 0, 0, 2, 4, 3, 0, 0, 0, 0, 0, 4,
        0, 1, 0, 0, 0, 0},
/* J J */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J K */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J L */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J M */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J N */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J O */ {4, 2, 6, 0, 3, 0, 3, 12, 10, 0, 1, 6, 0, 5, 0, 0, 0, 10, 10,
        1, 13, 4, 2, 0, 7, 0},
/* J P */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J R */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J S */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J T */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J U */ {3, 3, 0, 19, 0, 0, 8, 0, 2, 2, 2, 8, 5, 24, 0, 1, 0, 15, 9,
        5, 0, 1, 0, 2, 0, 0},
/* J V */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J W */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J Y */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* J Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* K A */ {{0, 3, 0, 6, 1, 2, 8, 2, 1, 1, 1, 9, 4, 13, 2, 3, 0, 18, 4,
        17, 2, 1, 2, 1, 5, 2},
/* K B */ {3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 11, 0, 0, 1, 0, 0,
        1, 0, 0, 0, 0, 0},
/* K C */ {2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K D */ {3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K E */ {4, 3, 0, 7, 28, 3, 3, 2, 1, 0, 0, 20, 5, 55, 3, 3, 0, 59, 18,
        56, 2, 1, 4, 0, 27, 0},
/* K F */ {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        3, 0, 0, 0, 0, 0},
/* K G */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K H */ {9, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 8, 0, 0, 1, 0, 1,
        0, 0, 0, 0, 0, 0},
/* K I */ {5, 2, 3, 9, 15, 1, 1, 0, 0, 0, 1, 10, 10, 87, 2, 4, 0, 11,
        15, 13, 0, 2, 2, 0, 0, 0},
/* K J */ {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K K */ {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K L */ {15, 0, 0, 0, 46, 0, 0, 0, 13, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 2, 0},
/* K M */ {13, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K N */ {5, 0, 0, 0, 11, 0, 0, 0, 10, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
        0, 8, 0, 0, 0, 0, 0},
/* K O */ {1, 1, 2, 3, 2, 4, 0, 2, 1, 0, 1, 3, 1, 7, 1, 2, 0, 6, 2, 1,
        7, 4, 5, 2, 0, 0},
/* K P */ {2, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K R */ {10, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
        5, 0, 0, 0, 2, 0},
/* K S */ {2, 2, 1, 0, 1, 0, 1, 9, 5, 0, 1, 0, 4, 0, 8, 3, 0, 0, 0, 11,
        4, 0, 1, 0, 1, 0},
/* K T */ {3, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 5, 0, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K U */ {0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 5, 1, 1, 0, 8, 0, 2, 1, 1,
        0, 0, 1, 0, 1, 0},
/* K V */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K W */ {9, 0, 0, 0, 4, 0, 0, 1, 2, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* K Y */ {2, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 4, 0, 0, 2, 0, 0, 2, 1, 0,
        1, 0, 3, 0, 0, 0},
/* K Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* L A */ {{1, 46, 84, 43, 3, 2, 46, 9, 52, 0, 10, 3, 64, 242, 4, 23, 1,
        157, 92, 210, 45, 21, 23, 9, 42, 11},
/* L B */ {12, 0, 0, 0, 17, 0, 0, 0, 3, 0, 0, 2, 0, 0, 13, 0, 0, 4, 0,
        0, 4, 0, 0, 0, 2, 0},
/* L C */ {9, 0, 0, 0, 6, 0, 0, 12, 4, 0, 0, 1, 1, 0, 19, 0, 0, 2, 0, 1,
        7, 0, 0, 0, 2, 0},
/* L D */ {2, 3, 2, 0, 41, 4, 0, 1, 16, 0, 0, 1, 2, 3, 13, 1, 0, 8, 9,
        2, 3, 0, 5, 0, 3, 0},
/* L E */ {94, 25, 75, 44, 36, 13, 55, 9, 26, 1, 1, 9, 55, 121, 22, 22,
        0, 77, 84, 115, 12, 29, 14, 30, 75, 1},
/* L F */ {9, 1, 0, 0, 4, 1, 1, 1, 12, 0, 0, 1, 0, 0, 7, 0, 0, 8, 1, 2,
        8, 0, 1, 0, 0, 0},
/* L G */ {16, 0, 0, 0, 12, 0, 0, 0, 10, 0, 0, 0, 0, 0, 6, 0, 0, 6, 0,
        0, 0, 0, 0, 0, 0, 0},
/* L H */ {7, 0, 0, 0, 6, 0, 0, 0, 2, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* L I */ {82, 33, 140, 26, 43, 37, 73, 0, 0, 1, 6, 11, 46, 238, 50, 40,
        13, 5, 90, 127, 12, 36, 0, 3, 0, 7},
/* L J */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* L K */ {7, 0, 0, 0, 4, 0, 0, 3, 9, 0, 0, 2, 0, 1, 2, 0, 0, 0, 3, 0,
        0, 0, 3, 0, 8, 0},
/* L L */ {128, 12, 2, 4, 169, 7, 2, 4, 152, 1, 0, 0, 7, 0, 100, 2, 0,
        1, 10, 2, 41, 0, 7, 0, 53, 0},
/* L M */ {27, 0, 0, 2, 11, 0, 0, 2, 9, 0, 0, 0, 1, 0, 13, 0, 0, 0, 4,
        0, 3, 0, 0, 0, 3, 0},
/* L N */ {0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        3, 0, 0, 0, 0, 0},
/* L O */ {23, 23, 65, 15, 7, 4, 132, 3, 32, 0, 2, 7, 29, 69, 50, 36,
        11, 74, 33, 53, 66, 16, 80, 1, 12, 1},
/* L P */ {11, 0, 0, 0, 3, 1, 0, 21, 5, 0, 0, 0, 1, 0, 6, 0, 0, 3, 1, 4,
        0, 0, 0, 0, 1, 0},
/* L Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* L R */ {2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
        2, 0, 0, 0, 6, 0},
/* L S */ {7, 1, 0, 0, 16, 0, 0, 8, 23, 0, 1, 0, 1, 0, 20, 3, 0, 0, 1,
        23, 0, 0, 1, 0, 2, 0},
/* L T */ {22, 1, 0, 0, 23, 0, 0, 14, 34, 0, 0, 0, 2, 0, 23, 0, 0, 9, 3,
        0, 8, 1, 1, 0, 18, 5},
/* L U */ {5, 17, 26, 18, 31, 5, 13, 0, 5, 2, 4, 8, 68, 31, 15, 5, 0,
        21, 68, 56, 0, 4, 0, 13, 0, 1},
/* L V */ {19, 0, 0, 1, 46, 0, 0, 0, 9, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* L W */ {8, 0, 0, 0, 2, 0, 0, 1, 2, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0},
/* L X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* L Y */ {2, 4, 12, 2, 2, 2, 3, 7, 2, 0, 1, 3, 13, 11, 2, 11, 0, 2, 31,
        15, 1, 0, 4, 0, 0, 0},
/* L Z */ {2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}},
/* M A */ {{0, 10, 59, 34, 3, 0, 57, 7, 31, 3, 25, 104, 6, 326, 2, 4, 0,
        144, 49, 192, 10, 2, 3, 11, 14, 7},
/* M B */ {31, 1, 0, 1, 44, 0, 0, 0, 32, 0, 0, 31, 0, 1, 27, 1, 0, 32,
        1, 0, 21, 0, 0, 0, 0, 0},
/* M C */ {3, 1, 17, 6, 2, 2, 9, 3, 5, 0, 9, 3, 3, 4, 2, 1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M D */ {0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M E */ {30, 6, 8, 45, 3, 2, 14, 1, 4, 0, 1, 51, 19, 283, 10, 4, 0,
        125, 39, 128, 0, 2, 9, 3, 4, 1},
/* M F */ {0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 0,
        4, 0, 0, 0, 0, 0},
/* M G */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M H */ {0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0},
/* M I */ {19, 0, 93, 54, 8, 2, 19, 0, 0, 1, 2, 76, 9, 194, 4, 0, 1, 21,
        96, 109, 10, 0, 0, 5, 0, 1},
/* M J */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M K */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M L */ {1, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M M */ {40, 0, 0, 0, 46, 0, 0, 0, 33, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
        0, 17, 0, 0, 0, 12, 0},
/* M N */ {12, 0, 0, 0, 4, 0, 0, 0, 10, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 1, 0},
/* M O */ {4, 10, 13, 28, 4, 1, 14, 3, 11, 0, 6, 47, 10, 168, 16, 3, 0,
        107, 40, 45, 56, 8, 1, 1, 1, 2},
/* M P */ {52, 3, 0, 0, 71, 1, 1, 26, 18, 0, 4, 71, 0, 0, 50, 0, 0, 41,
        9, 43, 19, 0, 0, 0, 7, 0},
/* M Q */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        2, 0, 0, 0, 0, 0},
/* M R */ {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0},
/* M S */ {0, 1, 2, 1, 5, 1, 0, 2, 3, 0, 1, 0, 2, 0, 8, 2, 0, 0, 1, 10,
        1, 0, 0, 0, 2, 0},
/* M T */ {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M U */ {0, 0, 7, 11, 6, 3, 6, 0, 2, 0, 2, 55, 11, 29, 2, 1, 0, 18,
        53, 30, 0, 0, 0, 0, 0, 3},
/* M V */ {0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M W */ {2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M X */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0},
/* M Y */ {0, 0, 11, 0, 5, 0, 1, 0, 0, 0, 0, 1, 0, 2, 7, 0, 0, 7, 7, 4,
        0, 0, 0, 0, 0, 0},
/* M Z */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0}
}};


#endif /* _RANDPASS_H */

