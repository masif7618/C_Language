#include<stdio.h>
#include<string.h>

void swap_strings(char s1[], char s2[]) {
    char temp[100];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
} // Checked

void sort(int *ptr, int size){
    int r,i,temp;
    for(r=1; r<size;r++){
        for(i=0;i<=size-r-1;i++){
            if(ptr[i] > ptr[i+1]){
                temp = ptr[i];
                ptr[i] = ptr[i+1];
                ptr[i+1] = temp;
            }
        }
    }
} // Checked

void merge(int *arr, int size1, int *arr2, int size2, int *arr3){
    int i,j,k;
    for(i=0,j=0,k=0;i<size1 && j<size2;k++){
        if(arr[i] < arr2[j]){
            arr3[k] = arr[i];
            i++;
        }
        else{
            arr3[k] = arr[j];
            i++;
        }
    }
    while(i<size1){
        arr3[k] = arr[i];
        i++;
        k++;
    }
    while(j<size2){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
} // Checked

int p4(int *arr, int size){
    int left,right,loc,temp;
    left=0;
    right=size-1;
    loc=0;
    
    while(left<right){
        while(left<right&&arr[loc]<arr[right])
            right--;
        if(left==right)
            break;
        temp=arr[right];
        arr[right] = arr[loc];
        arr[loc] = temp;
        loc=right;
        while(left<right&&arr[left]<arr[loc])
            left++;
        if(left==right)
            break;
        temp = arr[left];
        arr[left] = arr[loc];
        arr[loc] = temp;
        loc=left;
    }
    return loc;
} // Checked

int highestMarks(int **p, int no_of_classes, int no_of_strudents[]){
    int i,j,max;
    max=p[0][0];
    for(i=0;i<no_of_classes;i++){
        for(j=0;j<no_of_strudents[i];j++){
            if(p[i][j]>max)
                max=p[i][j];
        }
    }
    return max;
} // Checked

int main(){
     // Example 2D array representing marks
    int marks[3][4] = {
        {85, 95, 92, 88},
        {78, 82, 80, 85},
        {95, 88, 92, 89}
    };

    // Number of students in each class
    int students_per_class[3] = {4, 4, 4};

    // Convert the 2D array to a pointer to pointer
    int *marks_ptr[3];
    for (int i = 0; i < 3; i++) {
        marks_ptr[i] = marks[i];
    }

    // Call the function
    int result = highestMarks(marks_ptr, 3, students_per_class);

    // Print the result
    printf("The highest marks are: %d\n", result);

   

    return 0;
}

