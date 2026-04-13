#include <stdio.h>

void select(int *integer){
    int izin = integer[0];
    double suhu = integer[1];
    int radiasi = integer[2];
    int jam = integer[3];

    
    if(radiasi >= 6){
        printf("TOLAK\n");
    }
    else if(suhu >= 390){
        printf("KARANTINA\n");
    }
    else if(izin == 1){
        if(jam < 6 || jam > 20){
        printf("TOLAK\n");
        }
        else{
            printf("MASUK\n");
        }
    }
    else if(izin == 2){ 
        if(jam >= 8 && jam <= 18 && radiasi <= 2 ){
            printf("MASUK\n");
            }
        else{
            printf("PEMERIKSAAN\n");
            }
    }
        
    
    else if(izin == 3 && radiasi == 0 && suhu < 380){
        printf("MASUK\n");
    }
    else{
        printf("TOLAK\n");
    }

}



int main(void) {

    int integer[4];
    


    scanf("%d %d %d %d", &integer[0], &integer[1], &integer[2], &integer[3]);

    select(integer);
    
    

    return 0;
}
