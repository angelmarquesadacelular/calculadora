#include "stdafx.h"  //________________________________________ Calculadora.cpp
#include "Calculadora.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Calculadora app;
	return app.BeginDialog(IDI_Calculadora, hInstance);
}

void Calculadora::Window_Open(Win::Event& e)
{
}

void Calculadora::btCalcular_Click(Win::Event& e)
{
}
