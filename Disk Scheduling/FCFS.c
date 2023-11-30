
#include <stdio.h>
#define size 8
void FCFS(int arr[], int head){
    int i, temp = head;
    int distance, cur_track;
    int seek_count = 0;
    for (i = 0; i < size; i++){
        cur_track = arr[i];
        distance = cur_track - temp;
        if (cur_track - temp < 0)
            distance =-(distance);
        seek_count += distance;
        temp = cur_track;
    }
    printf("Total number of seek operations = %d", seek_count);
    printf("\n\nSeek Sequence is\n");
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}
int main(){
    int arr[size] = {176, 79, 34, 60, 92, 11, 41, 114};
    int head = 50;
    FCFS(arr, head);
    return 0;
}