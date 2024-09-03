#pragma once
#include <QWidget>

class CFrameLessWidgetBase :
    public QWidget
{
public:
    CFrameLessWidgetBase(QWidget *p = nullptr);
    ~CFrameLessWidgetBase();

protected:
    bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override;
};

