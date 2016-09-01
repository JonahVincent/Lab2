#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;



class WriteFile{

private:
	ofstream output_file;
	bool closed;
	const char* file_name;

public:
	WriteFile();
	~WriteFile();
	void writeLine(WriteFile* wf, String* line);	
	void close(WriteFile* wf);
	const char* setFileName(const char* text);
	const char* getFileName();	
};

#endif