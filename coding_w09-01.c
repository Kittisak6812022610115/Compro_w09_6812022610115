#include <stdio.h>

int main() {
    int start, stop;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    if (start < stop) {
        printf("Start number is %d and stop number is %d\n", start, stop);

        for (int i = start; i <= stop; i++) {
             printf("%d ", i);
            
        }
        printf("\nThank you\n");
    }
    else if (start == stop) {
        printf("Your Start number is equal to Stop number, please try again!\n");
    }
    else { // start > stop
        printf("Your Start number is greater than Stop number, please try again!\n");
    }

    return 0;
}
//  โค้ดนี้ทำงานตามเงื่อนไขที่โจทย์กำหนด (ตรวจสอบ start < stop, = stop, > stop)
//  ถ้า start < stop จะแสดงเลขคู่ตามปกติ
//  ถ้า start = stop หรือ start > stop จะแจ้งเตือนและไม่แสดงผล