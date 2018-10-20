#ifndef VIEWINGTOOLSBAR_H
#define VIEWINGTOOLSBAR_H

#include "gridtoolbar.h"

class ViewingToolsBar : public GridToolBar
{
public:
    ViewingToolsBar(QWidget *parent = nullptr);

private:
    void CreateTools();

signals:

public slots:

};

#endif // VIEWINGTOOLSBAR_H
