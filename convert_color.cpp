// convert_color.cpp
#include <opencv2/opencv.hpp>
#include <cstdio>

using namespace cv;

int main( int argc, char** argv)
{
    char* imageName = argv[1];
    Mat image = imread( imageName, IMREAD_COLOR);
    
    if( argc != 2 || !image.data)
    {
        printf("No image data\n");
        return -1;
    }

    Mat gray_image;
    cvtColor( image, gray_image, COLOR_BGR2GRAY);

    imwrite("./gray_cat.jpg", gray_image);

    return 0;
}
