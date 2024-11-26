#include<stdio.h>

int main(){
    int lower = 0, upper = 0, total_chars = 0, total_non_white_chars = 0;
    for (int i=0; i < 10; i++){
        char input_string[15];
        printf("Enter an input string:");
        
        fgets(input_string, 15, stdin);
        printf("%s", input_string);
        
        for (int j=0; j < 15; j++){
            
            if (input_string[j] == '\0' || input_string[j] == '\n')
                break;
            
            else if (input_string[j] >= 97 && input_string[j] <= 122){
                lower ++;
                total_non_white_chars ++;
            }
        
            else if (input_string[j] >= 65 && input_string[j] <= 90){
                upper ++;
                total_non_white_chars ++;
            }
            
            else if (input_string[j] == 32){
            }
            
            total_chars ++;
        }
    }
    printf("lower case letters=%d, upper case letters=%d, total characters=%d, and total_non_whitespace characters=%d", lower, upper, total_chars, total_non_white_chars);
    return 0;
}
