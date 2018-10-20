#ifndef FAVORITETOOLBAR_H
#define FAVORITETOOLBAR_H

#include "gridtoolbar.h"

class FavoriteToolsBar : public GridToolBar
{
public:
    FavoriteToolsBar(QWidget *parent = nullptr);

private:
    void CreateTools();

};

#endif // FAVORITETOOLBAR_H
