#ifndef CUSTOM_TYPE
#define CUSTOM_TYPE

typedef struct object {
    // x and y denote the position of the object 
    float x;    
    float y;

    // shape is a constant value.
    // constants are defined in constants.h 
    int shape;

    // sizeX and sizeY denote the width and height of the object 
    // [change this later if necessary]
    float sizeX;
    float sizeY;

    // Denotes the hp of the object 
    // Values for HP are to be defined in constants.h 
    float hp;
}obj;

#endif