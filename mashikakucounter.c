#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int total_chars, n, i, total_images, opt;
    while ((opt = getopt(argc, argv, "hv")) != -1)
    {
        switch (opt)
        {
        case 'h':
            printf("Calculates the number of sheets output as images from the total number of characters.\n");
            printf("Only the number of characters is taken into account, so the number of characters in the case of page breaks is not taken into account.\n");
            printf("The first argument is the total number of characters; the second argument is the character set options.\nIf the second argument is not entered, it defaults to 1 (480 characters (30 characters x 16 lines)).\nDetails of the arguments are as follows.\n\n");
            printf("1 = 480字（30字×16行）\n");
            printf("2 = 336字（24字×14行）\n");
            printf("3 = 252字（21字×12行）\n");
            printf("4 = 180字（18字×10行）\n");
            printf("5 = 144字（16字×9行）\n");
            printf("6 = 112字（14字×8行）\n");
            printf("7 = 84字（12字×7行）\n");
            printf("8= 140字（14字×10行／行間狭め）\n\n");
            return 0;
        case 'v':
            printf("mycommand version 1.0\n");
            return 0;
        default:
            fprintf(stderr, "Usage: mycommand [OPTION]...\n");
            return 1;
        }
    }

    if (argc >= 2)
    {
        total_chars = atoi(argv[1]); // 1番目の引数をint型に変換
        if (argc >= 3)
        {
            n = atoi(argv[2]); // 2番目の引数をint型に変換
        }
        else
        {
            n = 1; // 2番目の引数がなかった場合はデフォルト値を設定
        }
    }
    else
    {
        printf("Error: Not enough arguments\n");
        return 1;
    }
    // 2番目の引数に応じて割られる数を設定
    switch (n)
    {
    case 1:
        i = 480;
        break;
    case 2:
        i = 336;
        break;
    case 3:
        i = 252;
        break;
    case 4:
        i = 180;
        break;
    case 5:
        i = 144;
        break;
    case 6:
        i = 112;
        break;
    case 7:
        i = 84;
        break;
    case 8:
        i = 140;
        break;
    default:
        printf("Error: Invalid argument for n\n");
        return 1;
    }
    total_images = ceil((float)total_chars / i);
    printf("%d characters will be output in %d images.\n", total_chars, total_images);

    return 0;
}