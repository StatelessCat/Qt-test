/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created: Tue Jul 2 19:25:01 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *primaryColumnComboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *secondaryColumnC;
    QComboBox *comboBox_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QComboBox *tertiaryColumnC;
    QComboBox *comboBox_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QString::fromUtf8("SortDialog"));
        SortDialog->resize(328, 424);
        layoutWidget = new QWidget(SortDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 275, 320));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        primaryColumnComboBox = new QComboBox(groupBox);
        primaryColumnComboBox->setObjectName(QString::fromUtf8("primaryColumnComboBox"));

        gridLayout->addWidget(primaryColumnComboBox, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 2, 2);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCheckable(true);

        verticalLayout_2->addWidget(pushButton);


        gridLayout_5->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        secondaryColumnC = new QComboBox(groupBox_2);
        secondaryColumnC->setObjectName(QString::fromUtf8("secondaryColumnC"));

        gridLayout_2->addWidget(secondaryColumnC, 0, 1, 1, 1);

        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_2->addWidget(comboBox_4, 1, 1, 2, 2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        tertiaryColumnC = new QComboBox(groupBox_3);
        tertiaryColumnC->setObjectName(QString::fromUtf8("tertiaryColumnC"));

        gridLayout_4->addWidget(tertiaryColumnC, 0, 1, 1, 1);

        comboBox_8 = new QComboBox(groupBox_3);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_4->addWidget(comboBox_8, 1, 1, 2, 2);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 3, 0, 1, 1);

        QWidget::setTabOrder(primaryColumnComboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, buttonBox);
        QWidget::setTabOrder(buttonBox, pushButton);
        QWidget::setTabOrder(pushButton, secondaryColumnC);
        QWidget::setTabOrder(secondaryColumnC, comboBox_4);
        QWidget::setTabOrder(comboBox_4, tertiaryColumnC);
        QWidget::setTabOrder(tertiaryColumnC, comboBox_8);

        retranslateUi(SortDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SortDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SortDialog, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(toggled(bool)), groupBox_2, SLOT(setVisible(bool)));
        QObject::connect(pushButton, SIGNAL(toggled(bool)), groupBox_3, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0, QApplication::UnicodeUTF8));
        primaryColumnComboBox->clear();
        primaryColumnComboBox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("SortDialog", "Column", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SortDialog", "Order", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SortDialog", "Descending", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("SortDialog", "&More", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SortDialog", "&Secondary Key", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SortDialog", "Column", 0, QApplication::UnicodeUTF8));
        secondaryColumnC->clear();
        secondaryColumnC->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0, QApplication::UnicodeUTF8)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SortDialog", "Descending", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("SortDialog", "Order", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("SortDialog", "&Tertiary Key", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SortDialog", "Column", 0, QApplication::UnicodeUTF8));
        tertiaryColumnC->clear();
        tertiaryColumnC->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0, QApplication::UnicodeUTF8)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SortDialog", "Descending", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("SortDialog", "Order", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
