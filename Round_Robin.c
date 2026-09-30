#include <stdio.h>

#define MAX_PROCESSES 5

int main() {
    int burst_time[MAX_PROCESSES], waiting_time[MAX_PROCESSES], turnaround_time[MAX_PROCESSES];
    int i, j, n = MAX_PROCESSES, time_quantum, total_time = 0;
    int remaining_time[MAX_PROCESSES];

    // Input burst times
    printf("Enter burst times for %d processes:\n", n);
    for (i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i]; // Initialize remaining time
    }

    // Input time quantum
    printf("Enter time quantum: ");
    scanf("%d", &time_quantum);

    // Round Robin Scheduling
    while (1) {
        int done = 1; // Check if all processes are done
        for (i = 0; i < n; i++) {
            if (remaining_time[i] > 0) {
                done = 0; // There is at least one process not done
                if (remaining_time[i] > time_quantum) {
                    total_time += time_quantum;
                    remaining_time[i] -= time_quantum;
                } else {
                    total_time += remaining_time[i];
                    waiting_time[i] = total_time - burst_time[i];
                    remaining_time[i] = 0;
                }
            }
        }
        if (done) break; // Exit if all processes are done
    }

    // Calculate turnaround time
    for (i = 0; i < n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
    }

    // Output results
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    return 0;
}