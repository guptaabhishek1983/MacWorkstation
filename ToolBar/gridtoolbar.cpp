#include "gridtoolbar.h"
#include <QHBoxLayout>

#include "toolpushbutton.h"

struct GridToolBarData{
    QHBoxLayout* m_hboxlayout;
};

GridToolBar::GridToolBar(QWidget *parent) : QWidget(parent)
{
    d = new GridToolBarData();
#ifdef WIDGETS_DEBUG_COLOR
    this->setStyleSheet("background-color: red;");
#endif
    this->setParent(parent);
    this->setContentsMargins(0,0,0,0);
    d->m_hboxlayout = new QHBoxLayout(this);
    d->m_hboxlayout->setContentsMargins(0,0,0,0);
    d->m_hboxlayout->setSpacing(2);
    d->m_hboxlayout->setAlignment(Qt::AlignLeft);
}

QHBoxLayout* GridToolBar::GetHBoxLayoutPtr(){
    return d->m_hboxlayout;
}
