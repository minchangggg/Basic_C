/* Tính giá taxi 
   Nếu đi đc 1km: 14.000
   Nếu đi đc 30km: 12.000
   Nếu đi trên 30km: 10.000
*/

#include <stdio.h>
#include <stdint.h>

int main () {
    float km = 0;
    float giatien = 0;
    printf ("Enter the number of kilometers you want to travel: "); scanf ("%f" , &km);
    
    if ( km<=1 ) {
        giatien = 14*km;
    }
    else if ( km>1 && km<=30 ) {
        giatien = 14 + 12*(km-1);
    }
    else if ( km>30 ) {
        giatien = 14 + 12*29 + 10*(km-30);
    }
    
    printf ("The money you must pay: %.1f thousand dong", giatien);

}
