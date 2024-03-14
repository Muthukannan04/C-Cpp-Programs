#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DESCRIPTION_SIZE 100

struct Task {
    char description[DESCRIPTION_SIZE];
    int completed;
};

struct TaskManager {
    struct Task* tasks;
    int size;
};

void addTask(struct TaskManager* taskManager, const char* description) {
    struct Task newTask;
    strncpy(newTask.description, description, DESCRIPTION_SIZE - 1);
    newTask.description[DESCRIPTION_SIZE - 1] = '\0';
    newTask.completed = 0;

    taskManager->tasks = realloc(taskManager->tasks, (taskManager->size + 1) * sizeof(struct Task));
    taskManager->tasks[taskManager->size] = newTask;
    taskManager->size++;
    printf("----------------------------------------------------------\n");
    printf("            Task added successfully.\n");
    printf("----------------------------------------------------------\n");
}

void markTaskAsCompleted(struct TaskManager* taskManager, int taskIndex) {
    if (taskIndex >= 0 && taskIndex < taskManager->size) {
        taskManager->tasks[taskIndex].completed = 1;
        printf("----------------------------------------------------------\n");
        printf("              Task marked as completed.\n");
        printf("----------------------------------------------------------\n");
    } else {
        printf("Invalid task index.\n");
    }
}

void deleteTask(struct TaskManager* taskManager, int taskIndex) {
    if (taskIndex >= 0 && taskIndex < taskManager->size) {
        for (int i = taskIndex; i < taskManager->size - 1; i++) {
            taskManager->tasks[i] = taskManager->tasks[i + 1];
        }
        taskManager->tasks = realloc(taskManager->tasks, (taskManager->size - 1) * sizeof(struct Task));
        taskManager->size--;
        printf("----------------------------------------------------------\n");
        printf("            Task deleted successfully.\n");
        printf("----------------------------------------------------------\n");
    } else {
        printf("Invalid task index.\n");
    }
}

void displayTasks(struct TaskManager* taskManager) {
    if (taskManager->size == 0) {
        printf("----------------------------------------------------------\n");
        printf("              No tasks available.\n");
        printf("----------------------------------------------------------\n");
        return;
    }
    printf("Tasks:\n");
    printf("-------------------\n");
    printf("Index\t3\tDescription\t\tStatus\n");
    for (int i = 0; i < taskManager->size; i++) {
        printf("%d\t%s\t%s\n", i, taskManager->tasks[i].description, taskManager->tasks[i].completed ? "Completed" : "Pending");
    }
    printf("-------------------\n");
}

int main() {
    struct TaskManager taskManager;
    taskManager.tasks = NULL;
    taskManager.size = 0;
    int choice;
    while (1) {
        printf("\n<<<<<<<<<<<<<<<<Task Manager>>>>>>>>>>>>>>>>:\n");
        printf("1. Add Task\n");
        printf("2. Mark Task as Completed\n");
        printf("3. Delete Task\n");
        printf("4. Display Tasks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1: {
                char description[DESCRIPTION_SIZE];
                printf("Enter task description: \n");
                getchar();
                fgets(description, sizeof(description), stdin);
                description[strcspn(description, "\n")] = '\0';
                addTask(&taskManager, description);
                break;
            }
            case 2: {
                int taskIndex;
                printf("Enter task index to mark as completed: \n");
                scanf("%d", &taskIndex);
                markTaskAsCompleted(&taskManager, taskIndex);
                break;
            }
            case 3: {
                int taskIndex;
                printf("Enter task index to delete: ");
                scanf("%d", &taskIndex);
                deleteTask(&taskManager, taskIndex);
                break;
            }
            case 4:
                displayTasks(&taskManager);
                break;
            case 5:
                printf("Exiting task manager.\n");
                free(taskManager.tasks);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}
