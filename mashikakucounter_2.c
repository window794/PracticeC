#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int total_chars = atoi(argv[1]); // 総文字数
    int image_rows = 16; // 画像の行数
    int image_cols = 30; // 画像の列数
    int image_chars = image_rows * image_cols; // 画像の文字数
    int num_images = (total_chars + image_chars - 1) / image_chars; // 画像枚数
    printf("%d枚の画像が必要です\n", num_images);
    return 0;
}