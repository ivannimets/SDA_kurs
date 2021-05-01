#include <stdio.h>
#include <stdlib.h>
#define etype int
#define P 10
#define M 10
#define N 10

/*struct element {
	etype x;
	size_t &slice;
}*/
 
etype arr[P][M][N];
//enum arr_type

/*size_t fill_in(etype * arr, arr_type atype) {
        
        for (int j; j <= M - 1; j++){
            for (int k; k <= N - 1; k++) {
            
            }
        }
}*/
void sort1(){}
void sort2(){}
void sort3(){}


void sort1(void *base, size_t arr, size_t width, int (*compar)(const void *, const void *))
{}

int main() {
    //fill_in(arr, inc);
    float a[3];
    float clock_start, clock_stop;
    clock_start = clock();
    sort1();
    clock_stop = clock();
    a[0] = clock_stop - clock_start;
    clock_start = clock();
    sort2();
    clock_stop = clock();
    a[1] = clock_stop - clock_start;
    clock_start = clock();
    sort3();
    clock_stop = clock();
    a[2] = clock_stop - clock_start;
}
