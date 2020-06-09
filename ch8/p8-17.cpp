#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void process(int& blue, int& green, int& red)
{
   int gray = (red * 0.3) + (green * 0.59) + (blue * 0.11);
   blue = gray;
   green = gray;
   red = gray;
}

int get_int(fstream& stream, int offset)
{
   stream.seekg(offset);
   int result = 0;
   int base = 1;
   for (int i = 0; i < 4; i++)
   {
      result = result + stream.get() * base;
      base = base * 256;
   }
   return result;
}

int main()
{
   cout << "Please enter the file name: ";
   string filename;
   cin >> filename;

   fstream stream;
   stream.open(filename, ios::in | ios::out | ios::binary);
   
   int file_size = get_int(stream, 2);
   int start = get_int(stream, 10);
   int width = get_int(stream, 18);
   int height = get_int(stream, 22);

   int scanline_size = width * 3;
   int padding = 0;
   if (scanline_size % 4 != 0)
   {
      padding = 4 - scanline_size % 4;
   }

   if (file_size != start + (scanline_size + padding) * height)
   {
      cout << "Not a 24-bit true color image file." << endl;
      return 1;
   }
   
   int pos = start;

   for (int i = 0; i < height; i++)
   {
      for (int j = 0; j < width; j++)
      {
         stream.seekg(pos);
         int blue = stream.get();
         int green = stream.get();
         int red = stream.get();

         process(blue, green, red);

         stream.seekp(pos);

         stream.put(blue);
         stream.put(green);
         stream.put(red);
         pos = pos + 3;
      }
      stream.seekg(padding, ios::cur);
      pos = pos + padding;
   }

   return 0;
}