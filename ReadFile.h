#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std; 

//This is a comment to see if this works
struct ReadFile
{
   ifstream input_file;
   bool _eof;
   bool closed;
};

ReadFile* createReadFile(const char* file_name);
void destroyReadFile(ReadFile* rf);
String* readLine(ReadFile* rf);
bool eof(ReadFile* rf);
void close(ReadFile* rf);

<<<<<<< HEAD
//random comment
=======
//changeJV
>>>>>>> 6f81b3481e9d234a8e5472530141f819e49b48df

#endif
