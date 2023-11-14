/* Viết chương trình nhập số đo hình chữ nhật, hình vuông, tam giác đều, rồi vẽ hình */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define Rectangle 1
#define Square 2
#define IsoRightTriangle 3

void draw_Rectangle_Square (int size_1, int size_2) {
    for (int i = 0; i < size_2; i++ ) {
        for (int j = 0; j < size_1; j++) {
            printf ("*");
        }
        printf ("\n");
    }
}

void drawIsoRightTriangle (int size_1) { 
    for (int i = 0; i < size_1; i++) {
        for (int j = 0; j <= i; j++) {
            printf ("*");
        }
        printf ("\n");
    }
}

int main () {
    bool ok = true; 
    while ( ok ) {
        int size_1=0;
        int size_2=0;
        printf ("\nChoose the shape you want");
        printf ("\n1. Rectangle");
        printf ("\n2. Square");
        printf ("\n3. Isosceles Right Triangle");
        int choice_input;
        printf ("\nEnter your choice: "); scanf ("%d",&choice_input);
        
        switch (choice_input) {
            case Rectangle:
                printf ("\nEnter the length of the Rectangle: "); scanf ("%d",&size_1);
                printf ("\nEnter the width of the Rectangle: "); scanf ("%d",&size_2);
                draw_Rectangle_Square (size_1, size_2);
                break;
            case Square:
                printf ("\nEnter the side of Square: "); scanf ("%d",&size_1);
                size_2 = size_1;
                draw_Rectangle_Square (size_1, size_2);
                break;
            case IsoRightTriangle:
                printf ("\nEnter the right side of Isosceles Right Triangle: "); scanf ("%d",&size_1);
                drawIsoRightTriangle (size_1);
                break;
            default:
                ok = false;
                break;
        }
    }
}