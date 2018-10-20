#include "viewingtoolsbar.h"
#include <QGridLayout>
#include "CustomControls/toolpushbutton.h"

ViewingToolsBar::ViewingToolsBar(QWidget *parent) : GridToolBar(parent)
{
    this->setParent(parent);
    this->CreateTools();
}


void ViewingToolsBar::CreateTools(){
    auto layout = this->GetHBoxLayoutPtr();
    {
        QIcon ico(":/toolbar/Resources/Images/32x32/blue/3d.png");
        ToolPushButton* btn = new ToolPushButton(ico, "");
        layout->addWidget(btn);
    }
    {
        QIcon ico(":/toolbar/Resources/Images/32x32/blue/angle.png");
        ToolPushButton* btn = new ToolPushButton(ico, "");
        layout->addWidget(btn);
    }
    {
        QPushButton* btn = new QPushButton(this);
        btn->setAutoDefault(false);
        layout->addWidget(btn);
    }
}
