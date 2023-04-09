#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue)
            {
                image[i][j].rgbtRed = 60;
                image[i][j].rgbtGreen = 20;
                image[i][j].rgbtBlue = 200;
                return;
            }
            image[i][j].rgbtRed = 00;
            image[i][j].rgbtGreen = 0;
            image[i][j].rgbtBlue = 0;
        }
    }
}
