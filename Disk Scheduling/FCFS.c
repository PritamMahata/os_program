// This is wrong  do not write this
// this is wrong do not write this
// this is wrong do not write this
#include <stdio.h>
#define size 8
void FCFS(int arr[], int head)
{
    int i;
    int distance, cur_track;
    int seek_count = 0;
    for (i = 0; i < size; i++)
    {
        cur_track = arr[i];
        distance = cur_track - head;
        seek_count += distance;
        head = cur_track;
    }
    printf("Total number of seek operations = %d", seek_count);
    printf("\n\nSeek Sequence is\n");
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int arr[size] = {176, 79, 34, 60, 92, 11, 41, 114};
    int head = 50;
    FCFS(arr, head);
    return 0;
}