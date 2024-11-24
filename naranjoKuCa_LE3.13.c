/*
============================================================================
FILE : naranjoKuCa_LE3.13
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Solve the Tuition of ABC college for 1st and 2nd Semester
COPYRIGHT : created
REVISION HISTORY
Date: September 15, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : ABC College Tuition for 1st and 2nd Semester
DESCRIPTION : Solves the Tuition Fee for ABC College 1st and 2nd Semester
ARGUMENTS :
int FsUnits - First Semester Units input
int SsUnits - Second Semester Units input
int FTuition - First Semester Tuition Fee
int STuition - Second Semester Tuition Fee
int FperUnit - First Semester Fee per Unit
int Fincrement - First Semester increment per 12 Units
int FunitPenalty - First Semester Penalty Fee per 12 Units * 2260
int SperUnit - Second Semester Fee per Unit
int Sincrement - Second Semester increment per 12 Units
int SunitPenalty - Second Semester Penalty Fee per 12 Units * 2260
RETURNS : void
===========================================================================
*/
#include <stdio.h>

int main()
{
    int FsUnits;
    int SsUnits;
    int FTuition;
    int STuition;

    printf("WELCOME TO ABC COLLEGE \n");
    printf("Units for the First Semester: ");
    scanf("%d", &FsUnits);

    int FperUnit = (FsUnits * 450);
    int Fincrement = (FsUnits / 12);
    int FunitPenalty = Fincrement * 2260;

    FTuition = FperUnit + FunitPenalty + 450;

    printf("Units for the Second Semester: ");
    scanf("%d", & SsUnits );

    int SperUnit = (SsUnits * 450);
    int Sincrement = (SsUnits / 12);
    int SunitPenalty = Sincrement * 2260;

    STuition = SperUnit + SunitPenalty + 450;

    printf("\nFirst Semester Tuition: %d\n", FTuition);
    printf("Second Semester Tuition: %d\n", STuition);
    printf("Total Semester Tuition: %d", FTuition + STuition);


    return 0;
}
