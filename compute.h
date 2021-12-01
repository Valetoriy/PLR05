#include <stdio.h>
#include <limits.h>

void compute(int *array) {
    int mine = INT_MAX, maxe = INT_MIN;
    int firstpi = -1, lastpi = -1, summ = 0;
    for (int i = 0; i < 10; i++) {
        int num = array[i];

        // min && max elem
        if (num < mine)
            mine = num;
        if (num > maxe)
            maxe = num;

        // positive elem indexes
        if (num > 0) {
            if (firstpi == -1)
                firstpi = i;
            lastpi = i;
        }
    }

    for (int i = firstpi + 1; i < lastpi; i++)
        summ += array[i];
        
    printf("Min elem massiva = %d, max elem massiva = %d\n", mine, maxe);
    printf("Summa elem mezhdu pervim i poslednim polozh. elem = %d", summ);

}
