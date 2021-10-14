#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int m[9][9] = { 
             {2,2,2,2,2,2,2,2,2}, 
             {2,0,0,0,0,0,0,0,2}, 
             {2,0,2,2,0,2,2,0,2},
             {2,0,2,0,0,2,0,0,2},
             {2,0,2,0,2,0,2,0,2},
             {2,0,0,0,0,0,2,0,2},
             {2,2,0,2,2,0,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,2,2,2,2,2,2,2,2} };

int Si, Sj, Ei, Ej; 
int success, top, Path_i[100], Path_j[100];


int visit(int Si, int Sj); 

main() {
    top = 0; 
    success = 0; 
    printf("=== �̷� Ż�� ��� ã�� ���� ===");
    Si = 1, Sj = 1; 
    Ei = 7, Ej = 7; 

    if (visit(Si, Sj) == 0) {
        printf("�̷��� �ⱸ�� ã�� �� ����\n");
    }
    else {
        printf("�̷��� ��� ��θ� ã����\n");
    }
    return 0;

}

void printpath() {
    for (int i = 0; i < top; i++) {
        printf("[ %d, %d ] ", Path_i[i], Path_j[i]);
    }
    printf("\n");
}

int visit(int i, int j) {
    static int pathCount = 1; 
    m[i][j] = 1; 
    
    Path_i[top] = i;
    Path_j[top] = j;
    top++;

    if (i == Ei && j == Ej) { 
        printf("ã�� ��� %d��\n", pathCount++);
        printpath(); 
        success = 1; 
    }


    if (m[i][j + 1] == 0) 
        visit(i, j + 1);
    if (m[i + 1][j] == 0) 
        visit(i + 1, j);
    if (m[i][j - 1] == 0) 
        visit(i, j - 1);
    if (m[i - 1][j] == 0) 
        visit(i - 1, j);
    top--; 
    m[i][j] = 0;
    

    return success;
}