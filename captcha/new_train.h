// end2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>


static int model_control(System::String^  data, int count){
	
	using System::Runtime::InteropServices::Marshal;
	char* name= (char*)(Marshal::StringToHGlobalAnsi(data)).ToPointer( );

	//code from here.....
	
	return 1;
}
