#include "MainWidget.h"
#include <QVBoxLayout>

MainWidget::MainWidget(QWidget *parent)
    : CFrameLessWidgetBase(parent)
{
    initUI();
}

MainWidget::~MainWidget()
{
}
 
void MainWidget::initUI()
{
    m_pTitleBar = new CTitleBar(this);

    QWidget* w = new QWidget(this);
    w->setMinimumSize(800, 600);

    QVBoxLayout* pVlay = new QVBoxLayout(this);
    pVlay->addWidget(m_pTitleBar);
    pVlay->addWidget(w);

    pVlay->setContentsMargins(0, 0, 0, 0);
    
}






