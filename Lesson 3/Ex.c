#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
typedef int16_t Point[2];

void inputCoordinates (Point A) {
    printf ("\nNEnter Coordinates of Point");
    printf ("\nEnter value of Abscissa: "); scanf ("%hd",&A[0]);
    printf ("Enter value of Ordinate: "); scanf ("%hd",&A[1]);
}
 
float calcDistance ( Point A, Point B ) {
    printf ("\nDistance between two points (%hd,%hd) and (%hd,%hd) is ", A[0],A[1],B[0],B[1]);
    printf ( "%.2f", sqrt ( pow((A[0]-B[0]),2) + pow((A[1]-B[1]),2) ) );
}

float calcAreaTriangle ( Point A, Point B, Point C ) {
    printf ("\nArea of triangle formed by three points (%hd,%hd), (%hd,%hd) and (%d,%d) is ", A[0],A[1],B[0],B[1],C[0],C[1]);
    // S = 0.5*|(xB-xA)(yC-yA)-(xC-xA)(yB-yA)|
    printf ( "%.2f", 0.5*abs((B[0]-A[0])*(C[1]-A[1])-(C[0]-A[0])*(B[1]-A[1])) );
}

int main () {
    Point A, B, C;
    int choice_input;
    while (1) {
        do {
            printf ("\n\nChoose a math program to calculate");
            printf ("\n1. Calculate the distance between two points");
            printf ("\n2. Calculate the area of the triangle");
            printf ("\n0. Exit");
            printf ("\nEnter your choice: "); scanf ("%d",&choice_input);
            switch (choice_input) {
                case 1: 
                    inputCoordinates(A); inputCoordinates(B); 
                    calcDistance(A,B);
                    break;
                case 2:
                    inputCoordinates(A); inputCoordinates(B); inputCoordinates(C);
                    calcAreaTriangle(A,B,C);
                    break;
                case 0:
                    exit(0);
                default:
                    printf("The information is invalid. Please re-enter.");
            }
        } while (choice_input<0||choice_input>2);
    }
}
