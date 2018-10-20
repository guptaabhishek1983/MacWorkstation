#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QWidget>
#include <QHBoxLayout>

struct GridToolBarData;

class GridToolBar : public QWidget
{
    Q_OBJECT
public:
    explicit GridToolBar(QWidget *parent = nullptr);

protected:
    virtual void CreateTools() = 0;

public:
    QHBoxLayout* GetHBoxLayoutPtr();

signals:

public slots:

private:
    GridToolBarData* d;
};

#endif // TOOLBAR_H
