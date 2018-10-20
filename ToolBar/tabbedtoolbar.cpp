#include "tabbedtoolbar.h"

#include "gridtoolbar.h"
#include "viewingtoolsbar.h"

TabbedToolBar::TabbedToolBar(QWidget* parent)
{
    this->setParent(parent);
    this->setContentsMargins(0,0,0,0);

//    CreateFavTools();
    CreateViewingTools();
//    CreateWLWWTools();
//    CreateMeasurementTools();

}

void TabbedToolBar::CreateViewingTools(){
    auto toolbar = new ViewingToolsBar(this->parentWidget());
    this->addTab(toolbar,"Viewing Tools");
}
//void TabbedToolBar::CreateViewingTools(){
//    auto toolbar = new GridToolBar(this->parentWidget());
//    this->addTab(toolbar,"My Favorites");
//}

//void TabbedToolBar::CreateMeasurementTools(){
//    auto toolbar = new GridToolBar(this->parentWidget());
//    this->addTab(toolbar,"Measurement Tools");
//}

//void TabbedToolBar::CreateWLWWTools(){
//    auto toolbar = new GridToolBar(this->parentWidget());
//    this->addTab(toolbar,"WL/WW Tools");
//}


