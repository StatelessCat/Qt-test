#include "sortdialog.h"

SortDialog::SortDialog(QWidget * parent) :
    QDialog(parent)
{
    setupUi(this);
    groupBox_2->hide();
    groupBox_3->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    setColumnRange('A', 'Z');
}

void SortDialog::setColumnRange(QChar first, QChar last)
{
    primaryColumnComboBox->clear();
    secondaryColumnC->clear();
    tertiaryColumnC->clear();

    secondaryColumnC->addItem(tr("None"));
    tertiaryColumnC->addItem(tr("None"));

    primaryColumnComboBox->setMinimumSize(secondaryColumnC->sizeHint());

    QChar ch = first;
    while(ch <= last)
    {
        primaryColumnComboBox->addItem(QString(ch));
        secondaryColumnC->addItem(QString(ch));
        tertiaryColumnC->addItem(QString(ch));
        ch = ch.unicode() + 1;
    }
}
