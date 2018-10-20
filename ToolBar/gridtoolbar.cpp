#include "gridtoolbar.h"
#include <QHBoxLayout>

#include "CustomControls/toolpushbutton.h"

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

    d->m_hboxlayout = new QHBoxLayout(this);
    d->m_hboxlayout->setContentsMargins(1,1,1,1);
//    QPushButton* btn1 = new QPushButton(this);
//    btn1->resize(QSize(32,32));
//    btn1->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
//    {
//        btn1->setStyleSheet("border-style: solid; border-width:1px; border-color:blue");
//        QIcon ico(":/toolbar/Resources/Images/32x32/blue/3d.png");
//        btn1->setIcon(ico);
//        d->m_grid->addWidget(btn1, 0,0);
//    }

//    QPushButton* btn2 = new QPushButton(this);
//    btn2->resize(QSize(32,32));
//    btn2->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
//    {
//        btn2->setStyleSheet("border-style: solid; border-width:1px; border-color:blue");
//        QIcon ico(":/toolbar/Resources/Images/32x32/blue/angle.png");
//        btn2->setIcon(ico);
//        d->m_grid->addWidget(btn2, 0,1);
//    }
}

QHBoxLayout* GridToolBar::GetHBoxLayoutPtr(){
    return d->m_hboxlayout;
}
