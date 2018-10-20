#include "toolpushbutton.h"
#include <QDebug>

ToolPushButton::ToolPushButton(SelectedAction action)
{
    this->m_action =action;
    this->m_icon = nullptr;
    this->m_selectedIcon = nullptr;
    this->setStyleSheet("color:white; border-style: solid; border-width:0px; border-color:gray; background-color:black;");
    //qDebug()<<"Btn stylesheet:"<<this->styleSheet();
    this->setIconSize(QSize(25,25));
    //this->setFixedSize(32,32);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    //this->setContentsMargins(5,5,5,5);
}

ToolPushButton::ToolPushButton(SelectedAction action, QString text):ToolPushButton(action){
    this->setText(text);
}

ToolPushButton::ToolPushButton(SelectedAction action, QIcon* icon, QIcon* selectedIcon,QString toolTipText):ToolPushButton(action){
    this->m_icon = icon;
    this->m_selectedIcon=selectedIcon;
    this->setIcon(*m_icon);
    this->setToolTip(toolTipText);
}

