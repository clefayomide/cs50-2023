#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    // TODO #1
    if (argc != 3)
    {
        printf("usage: ./reverse input.wav output.wav\n");
        return 1;
    }

    // Open input file for reading
    // TODO #2
    char *in_file = argv[1];
    FILE *input_read = fopen(in_file, "rb");
    if (input_read == NULL)
    {
        printf("not found\n");
        return 1;
    }

    // Read header
    // TODO #3
    WAVHEADER header;
    fread(&header, sizeof(WAVHEADER), 1, input_read);

    // Use check_format to ensure WAV format
    // TODO #4
    if (check_format(header) == 0)
    {
        printf("invalid format\n");
        return 1;
    }

    // Open output file for writing
    // TODO #5
    char *out_file = argv[2];
    FILE *output_read = fopen(out_file, "wb");
    if (output_read == NULL)
    {
        printf("not found\n");
        return 1;
    }

    // Write header to file
    // TODO #6
    fwrite(&header, sizeof(WAVHEADER), 1, output_read);

    // Use get_block_size to calculate size of block
    // TODO #7
    int size = get_block_size(header);

    // Write reversed audio to file
    // TODO #8
    if (fseek(input_read, size, SEEK_END))
    {
        return 1;
    }
    BYTE buffer[size];
    while (ftell(input_read) - size > sizeof(header))
    {
        if (fseek(input_read, -2 * size, SEEK_CUR))
        {
            return 1;
        }
        fread(buffer, size, 1, input_read);
        fwrite(buffer, size, 1, output_read);
    }

    fclose(input_read);
    fclose(output_read);
}

int check_format(WAVHEADER header)
{
    // TODO #4
    string check = "WAVE";
    int count = 0;
    int format_size = sizeof(header.format) / sizeof(header.format[0]);

    for (int i = 0; i < format_size; i++)
    {
        if (header.format[i] == check[i])
        {
            count++;
        }
    }

    if (count == format_size)
    {
        return 1;
    }
    return 0;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    int block_size = header.numChannels * header.bitsPerSample / 8;
    return block_size;
}