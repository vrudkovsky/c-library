#include "libmx.h"

void mx_del_strarr(char ***arr) {
    int i = 0;
    char **temp;
    temp = *arr;
    
    if (!arr || !*arr)
        return; 
    while (temp[i]) {
        free((char *)temp[i]);
        i++;
    }
    free((char **)temp);
    *arr = NULL;
}


// int main() {
//     int pos = 10;
//     char **arr = (char**)malloc(4 * sizeof(char*));
//     for (int i = 0; i < 4; i++) {
//         arr[i] = mx_strnew(pos);
//     }

//     arr[3] = NULL;
//     for (int i = 0; i < 4; i++) {
//             printf("%s", arr[i]);
//             printf("%c", '\n');
//     }
//     mx_del_strarr(&arr);
//     return 0;
// }
