#include <stdio.h>

int main(void){
    int dwarf[9];
    int t_dwarf[7];
    int sum = 0;
    int index = 0;
    int fake1, fake2, min_index, temp;

    for(int i=0; i<9; i++){
        scanf("%d", &dwarf[i]);
        sum += dwarf[i];
    }

    for(fake1=0; fake1<9; fake1++){
        for(fake2=fake1+1; fake2<9; fake2++){
            if(sum-100-dwarf[fake1] == dwarf[fake2])
                break;
        }
        if(fake2!=9) break;
    }

    for(int i=0; i<9; i++){
        if(i==fake1 || i==fake2) continue;
        else
            t_dwarf[index++]=dwarf[i];
    }

    for(int i=0; i<7; i++){
        min_index = i;
        for(int j=i+1; j<7; j++)
            if(t_dwarf[j]<t_dwarf[min_index])
                min_index = j;
        temp = t_dwarf[i];
        t_dwarf[i] = t_dwarf[min_index];
        t_dwarf[min_index] = temp;
    }
    
    for(int i=0; i<7; i++){
        printf("%d\n", t_dwarf[i]);
    }

    return 0;
}