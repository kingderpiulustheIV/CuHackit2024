#include <iostream>
#include "CImg.h"
using namespace  cimg_library;
using namespace  std;

int main() {
    const int x_position = 220;
    const int y_position = 36;
    const char* sourceFilename = "project.png";
    const char* editFile = "editable.png";
    const char* redlight = "redlight.png";
    const char* greenlight = "greenlight.png";
    const char* text = "Welcome to Red light and Green Light\nPress Enter to Begin";
    const char* loose = "Game Over!";
    const char* win = "You Win!"
    const unsigned char red[] = {255,0,0};
    const unsigned char black[] = {0,0,0};

    CImg<unsigned char> image(sourceFilename);
    CImg<unsigned char> editImage(editFile);
    CImg<unsigned char> red_Light(redlight);
    CImg<unsigned char> green_light(greenlight);

    // Overwrite the destination image with the data from the source image prompting the user to bein the game
    cimg_forXY(image, x, y) {
            for (int c = 0; c < image.spectrum(); ++c) {
                editImage(x, y, c) = image(x, y, c);
            }
        }
    editImage.save_png(editFile);


    // Draws text on image
    editImage.draw_text(x_position, y_position, text, red, 0, 1, 10);
    char  begin;
    cout << "Press enter to Play red light green light" << endl;
    cin.get();
    while() {
        //Red Light
        if () {
            cimg_forXY(image, x, y) {
                    for (int c = 0; c < image.spectrum(); ++c) {
                        editImage(x, y, c) = red_Light(x, y, c);
                    }
                }
            editImage.save_png(editFile);
            cout << "Red Light" << endl;
            if () {
                editImage.draw_text(x_position, y_position, loose, black, 0, 1, 10);
                editImage.save_png(editFile);
                abort();
            }
        }

        // Green Light
        if () {
            cimg_forXY(image, x, y) {
                    for (int c = 0; c < image.spectrum(); ++c) {
                        editImage(x, y, c) = green_light(x, y, c);
                    }
                }
            editImage.save_png(editFile);
            cout << "Green Light" << endl;

            if() {
                editImage.draw_text(x_position, y_position, win, black, 0, 1, 10);
                editImage.save_png(editFile);
                abort();
            }
        }

    }
    cout << "Image saved as: " << editFile << endl;
    return 0;

}
