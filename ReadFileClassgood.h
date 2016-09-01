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
	String* readLine();              //reads a line from the file and returns it in a string
	bool eof();                      //checks to see if it is the end of the file
	void close();                    //closses the file
};


#endif
