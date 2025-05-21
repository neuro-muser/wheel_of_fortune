#ifndef WHEELWIDGET_H
#define WHEELWIDGET_H

#include <QWidget>

class WheelWidget : public QWidget {
    Q_OBJECT

public:
    explicit WheelWidget(QWidget *parent = nullptr);
    // ...
protected:
    void paintEvent(QPaintEvent *event) override;
};



#endif // WHEELWIDGET_H
