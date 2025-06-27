#include<stdio.h>

int main(){
    int age,rollno;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your roll number: ");
    scanf("%d", &rollno);

    int encoded = age ^ rollno; // XOR encoding
    printf("Encoded value: %d\n", encoded);

    // Decoding the value
    int decoded_age = encoded ^ rollno; // Decoding back to age
    printf("Decoded age: %d\n", decoded_age);
    
    return 0; 
}