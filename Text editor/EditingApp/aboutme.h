#ifndef ABOUTME_H
#define ABOUTME_H

#include <QDialog>

namespace Ui {
class AboutMe;
}

class AboutMe : public QDialog
{
    Q_OBJECT

public:
    explicit AboutMe(QWidget *parent = nullptr);
    ~AboutMe();

private:
    Ui::AboutMe *ui;
};

#endif // ABOUTME_H
