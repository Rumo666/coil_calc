#ifndef FORM_H
#define FORM_H

#include <Qform>

namespace Ui {
class form;
}

class form : public Qform
{
    Q_OBJECT

public:
    explicit form(QWidget *parent = 0);
    ~form();

private:
    Ui::form *ui;
};

#endif // FORM_H
