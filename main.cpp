#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
    // Load the image from file
    Mat image = imread("D:\\AI-Center\\Computing\\C-Tutorial\\openCVLab01\\ai-center.png", IMREAD_COLOR);

    // Check if the image was loaded successfully
    if (image.empty()) {
        printf("Could not open or find the image\n");
        return -1;
    }

    // Create a window to display the image
    namedWindow("Display window", WINDOW_AUTOSIZE);

    // Show the image in the window
    imshow("Display window", image);

    // Wait for a keystroke in the window
    waitKey(0);

    return 0;
}
