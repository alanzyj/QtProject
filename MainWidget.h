#pragma once

#include <QtWidgets/QWidget>
#include "CTitleBar.h"
#include "CFrameLessWidgetBase.h"

class MainWidget : public CFrameLessWidgetBase 
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    void initUI();

private:
    CTitleBar* m_pTitleBar = nullptr;
};
