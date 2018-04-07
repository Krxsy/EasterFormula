// Formula taken from Wikipedia

void calcEasterSunday(int year) {    
    int A = year % 19;
    int K = year / 100;
    int M = 15 + (3*K + 3) / 4 - (8*K + 13) / 25;
    int D = (19*A + M) % 30;
    int S = 2 - (3*K + 3) / 4;
    double R  = (D + A / 11) / 29;
    int OG = 21 + D - R;
    int SZ = 7 - (year + year / 4 + S) % 7;
    int OE = 7 - (OG - SZ) % 7;
    int OS = (OG + OE);

    if(OS > 31) {
        int day = OS - 31;
        printf("%d April \n", day);
    }
    else {
        printf("%d March \n", OS);
    }
}
