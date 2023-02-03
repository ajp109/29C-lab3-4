#include "mbed.h"

int wordcount(char const * string) {
    int words = 0;

    return words;
}

int main() {

    // This text contains 11 words.
    char const * text = "This is a  word count test.\nHere is the second line !";
    printf("The text is:\n%s\n", text);
    printf("It contains %d words.\n", wordcount(text));

    while (true) {
        sleep();
    }
}
