#include <stdio.h>

int main() {
    int a[6][6] = {1,2,3,4,5,6};
    int i, j;
    int count=0;
    int count2=0;

    for(i = 0; i < 6; i++) {
	for(j = 0; j < 6; j++) {
	    if(j < 6 - i) {
		a[i][j] = j + 1;
		count++;
	    } else {
		a[i][j] = 0;
		count2++;
	    }
	}
    }

    for(i = 0; i < 6; i++) {
	for(j = 0; j < 6; j++)
	    printf("%d ", a[i][j]);

	printf("\n");
    }

    printf("count of 1st statement: %d\n",count);
    printf("count of 2nd statement: %d\n",count2);
    printf("sum=%d",count+count2);
    return 0;
}
