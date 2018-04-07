#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "./EasterFormula.cpp"

using namespace std;

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: ./EasterFormulaMain <year>\n");
        exit(1);
    }
    int year = atoi(argv[1]);
    
    printf("Requested year: %d\n", year);
    calcEasterSunday(year);
    return 0;
}
