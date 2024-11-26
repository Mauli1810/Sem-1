#include <stdio.h>

// Define an enumeration for color names
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    BLACK,
    WHITE
} Color;

int main() {
    Color color;
    int choice;

    
    printf("Select a color:\n");
    printf("0: RED\n1: GREEN\n2: BLUE\n3: YELLOW\n4: ORANGE\n5: PURPLE\n6: BLACK\n7: WHITE\n");
    scanf("%d", &choice);

    
    color = (Color)choice;
    switch (color) {
        case RED:
            printf("The hexadecimal code for RED is #FF0000\n");
            break;
        case GREEN:
            printf("The hexadecimal code for GREEN is #00FF00\n");
            break;
        case BLUE:
            printf("The hexadecimal code for BLUE is #0000FF\n");
            break;
        case YELLOW:
            printf("The hexadecimal code for YELLOW is #FFFF00\n");
            break;
        case ORANGE:
            printf("The hexadecimal code for ORANGE is #FFA500\n");
            break;
        case PURPLE:
            printf("The hexadecimal code for PURPLE is #800080\n");
            break;
        case BLACK:
            printf("The hexadecimal code for BLACK is #000000\n");
            break;
        case WHITE:
            printf("The hexadecimal code for WHITE is #FFFFFF\n");
            break;
        default:
            printf("Invalid choice. Please select a valid color number.\n");
            break;
    }

    return 0;
}

