#include "CImg/CImg.h"

using namespace cimg_library;

int main() {
    // Create a new image with a white background
    CImg<unsigned char> img(100, 100, 1, 3, 255);

    // Draw a black pixel at coordinates (0, 0)
    img(0, 0, 0) = 0;
    img(0, 0, 1) = 0;
    img(0, 0, 2) = 0;

    // Save the image to a file
    img.save("image.png");

    return 0;
}