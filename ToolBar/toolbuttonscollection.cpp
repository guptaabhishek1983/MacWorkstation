#include "toolbuttonscollection.h"
#include <QString>
#include <QMapIterator>
#include <QDebug>

#include "toolactions.h"

const QString lock_str = "com.meddiff.workstation.toolbarcreation";
ToolButtonsCollection* ToolButtonsCollection::m_ptr=nullptr;

ToolButtonsCollection* ToolButtonsCollection::GetHandle(){
    // TODO: check if this needs to be protected using Mutex & LOCK.
    if(ToolButtonsCollection::m_ptr==nullptr)
        m_ptr = new ToolButtonsCollection();
    return m_ptr;
}
ToolButtonsCollection::ToolButtonsCollection()
{
    for(int i=0;i<n_tool_actions_table;i++){
        ToolActions a = GetToolsActionData(tool_actions_table[i].action);
        if(a.action== SelectedAction::None) continue;

        qDebug().nospace() << "Creating ToolPushButton for Action:"<<a.action<<"";
//        QPixmap pxm(a.iconURI);
//        qDebug()<<"Pixmap size:"<<pxm.size().width()<<"x"<<pxm.size().width();
//        QPixmap scaledPxm = pxm.scaled(100,100, Qt::KeepAspectRatio);
//        qDebug()<<"Scaled Pixmap size:"<<scaledPxm.size().width()<<"x"<<scaledPxm.size().width();

        QIcon* ico = new QIcon(a.iconURI);
        QIcon* selected_ico = new QIcon(a.selectedIconURI);
        ToolPushButton* btn = new ToolPushButton(a.action, ico, selected_ico, a.desc);
        this->m_toolbuttons.insert(a.action,btn);
    }
}


ToolPushButton* ToolButtonsCollection::GetToolButton(SelectedAction action)
{
    ToolPushButton* ptr = nullptr;
    QMap<SelectedAction, ToolPushButton*>::iterator itr = m_toolbuttons.find(action);
    if(itr != m_toolbuttons.end()){
        ptr = itr.value();
    }
    return ptr;
}
