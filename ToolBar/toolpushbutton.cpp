#include "toolpushbutton.h"
#include <QDebug>

struct ToolPushButtonData{
    SelectedAction m_action;
    QIcon* m_selectedIcon;
    QIcon* m_icon;
};

ToolPushButton::ToolPushButton(SelectedAction action, QWidget* parent): QPushButton(parent)
{
    d = new ToolPushButtonData();
    d->m_action =action;
    d->m_icon = nullptr;
    d->m_selectedIcon = nullptr;
    this->setStyleSheet("color:white; border-style: solid; border-width:0px; border-color:gray; background-color:black;");
    this->setIconSize(QSize(25,25));
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    connect(this, SIGNAL(clicked()), this, SLOT(ButtonClicked()));
}

ToolPushButton::ToolPushButton(SelectedAction action, QString text):ToolPushButton(action){
    this->setText(text);
}

ToolPushButton::ToolPushButton(SelectedAction action, QIcon* icon, QIcon* selectedIcon,QString toolTipText):ToolPushButton(action){
    d->m_icon = icon;
    d->m_selectedIcon=selectedIcon;
    this->setIcon(*d->m_icon);
    this->setToolTip(toolTipText);
}

ToolPushButton::~ToolPushButton(){

}

void ToolPushButton::ButtonClicked(){
    qDebug()<< "Button clicked:"<<d->m_action;
}
