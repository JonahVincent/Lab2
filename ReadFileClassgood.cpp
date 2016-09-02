#include "ReadFileClass.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name) //constructor 
{

	input_file.open(file_name);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile()               //destructor calls close and closes the file
{
   close();
}

bool ReadFile::eof()              //checks to see if its the end of the file
{
   return _eof;
}

void ReadFile::close()           //closes the file
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()   //reads lines from the file and returns them in a string 
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}