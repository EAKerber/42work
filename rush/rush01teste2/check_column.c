#include <unistd.h>

int check_column(int *arr, int start, int end)
{
    int i;
    int j;

    i = start;
    while (i < 4) 
    {
        j = i + 1;
        while (j < 4)
        {
            if(arr[start + i * 4] == arr[start + j * 4])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void run_test(int *arr, int column, int expected_result)
{
    char result = 48 + check_column(arr, column, column);
    if (result == (48 + expected_result))
        write(1, "Pass\n", 5);
    else
        write(1, "Fail\n", 5);
}

int main(void){
    int arr[16] = {1,2,3,4,
                   2,4,4,4,
                   3,4,4,4,
                   3,2,3,4};

    // Test 1: First column (should be 1 because of repeated '3')
    run_test(arr, 0, 1);

    // Test 2: Second column (should be 0, no repetitions)
    run_test(arr, 1, 0);

    // Test 3: Third column (should be 1 because of repeated '4')
    run_test(arr, 2, 1);

    // Test 4: Fourth column (should be 0, no repetitions)
    run_test(arr, 3, 0);

    // Test 5: Modifying first column to remove repetition
    int arr2[16] = {1,2,3,4,
                    5,4,4,4,
                    6,4,4,4,
                    7,2,3,4};
    run_test(arr2, 0, 0);

    // Test 6: Modifying second column to add repetition
    int arr3[16] = {1,2,3,4,
                    2,4,4,4,
                    3,4,4,4,
                    3,4,3,4};
    run_test(arr3, 1, 1);

    // Test 7: Third column, no repetition (modified)
    int arr4[16] = {1,2,3,4,
                    2,4,5,4,
                    3,4,6,4,
                    3,2,7,4};
    run_test(arr4, 2, 0);

    // Test 8: Fourth column, add repetition
    int arr5[16] = {1,2,3,4,
                    2,4,4,4,
                    3,4,4,4,
                    3,2,3,4};
    run_test(arr5, 3, 1);

    // Test 9: All columns have no repetition
    int arr6[16] = {1,2,3,4,
                    5,6,7,8,
                    9,10,11,12,
                    13,14,15,16};
    run_test(arr6, 0, 0);
    run_test(arr6, 1, 0);
    run_test(arr6, 2, 0);
    run_test(arr6, 3, 0);

    // Test 10: All columns have repetition
    int arr7[16] = {1,1,1,1,
                    1,1,1,1,
                    1,1,1,1,
                    1,1,1,1};
    run_test(arr7, 0, 1);
    run_test(arr7, 1, 1);
    run_test(arr7, 2, 1);
    run_test(arr7, 3, 1);

    return 0;
}
