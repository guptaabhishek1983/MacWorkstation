#ifndef ANNOTATIONTOOLSBAR_H
#define ANNOTATIONTOOLSBAR_H

#include "gridtoolbar.h"

class AnnotationToolsBar : public GridToolBar
{
public:
    AnnotationToolsBar(QWidget *parent = nullptr);

private:
    void CreateTools();
};

#endif // ANNOTATIONTOOLSBAR_H
