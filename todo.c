#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 256
#define MAX_TASKS 100
#define FILE_NAME "tasks.txt"

typedef struct {
	char description[MAX_LEN];
	int completed;
} Task;

int main(int argc, char *argv[]) {
	Task tasks[MAX_TASKS];
	int task_count = 0;
}

void loadTasks(Task tasks[], int *task_count) {
	FILE *file = fopen(FILE_NAME, "r");
	if (file == NULL) {
		printf("ERROR OPENING FILE");
		return;
	}
	*task_count = 0;
	while (fscanf(file, "%d %[^n]", &tasks[*task_count].completed, tasks[*task_count].description == 2)) {
		(*task_count)++;
		if (*task_count > MAX_TASKS) {
			break;
		}
	}
	fclose(file);
}
