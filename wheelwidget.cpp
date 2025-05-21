#include "wheelwidget.h"
#include "QPainter"
#include <QResizeEvent>

WheelWidget::WheelWidget(QWidget *parent) : QWidget(parent)
{}
void WheelWidget::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::black, 4)); // Bold black outline
    painter.setBrush(Qt::NoBrush);      // No fill

    // Calculate a square area centered in the widget
    int side = qMin(width(), height()) - 10;
    QRect rect((width() - side) / 2, (height() - side) / 2, side, side);

    painter.drawEllipse(rect);
}
