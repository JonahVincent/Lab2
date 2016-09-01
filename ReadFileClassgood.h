#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std; 

//This is a comment to see if this works
class ReadFile
{
   private:
	ifstream input_file;
	bool _eof;
	bool closed;
   public:
	ReadFile(const char* file_name); //constructor
	~ReadFile();                     //destructor 
	String* readLine();
	bool eof();
	void close();
};

/*
ReadFile* createReadFile(const char* file_name);
void destroyReadFile(ReadFile* rf);
String* readLine(ReadFile* rf);
bool eof(ReadFile* rf);
void close(ReadFile* rf);
*/
#endif
