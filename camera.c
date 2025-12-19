// 将stb_image.h文件的内容复制到stb_image.h文件中，并将其包含在你的项目中
#include "stb_image.h"
#include <stdio.h>

int main() {
    int width, height, channels;
    // 读取图片文件，这里假设图片文件名为'image.jpg'
    unsigned char *img = stbi_load("image.jpg", &width, &height, &channels, 0);
    if (img == NULL) {
        printf("Error in loading the image\n");
        return -1;
    }
    printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, channels);
    
    // 使用图片数据（例如显示、处理等）
    // 这里我们只是简单地打印出图片的宽度、高度和通道数
    
    // 释放内存
    stbi_image_free(img);
    
    return 0;
}
