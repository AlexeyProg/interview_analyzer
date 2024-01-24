#pragma once
#include "wx/wx.h"
#include <iostream>
#include "company.h"
//#include "wx/scrolwin.h"

using namespace std;

class MyPanelItem : public wxPanel
{
public:
	MyPanelItem(wxWindow *parent, Company *item);
	void generate();
};

