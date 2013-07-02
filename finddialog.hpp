#ifndef FINDDIALOG_HPP
#define FINDDIALOG_HPP

#include <QDialog>

class QCheckBox; // déclaration préalable des classes Qt, plus rapide que des #include
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
    Q_OBJECT //necessaire pour toutes les classes définissant des signaux et slot

public:
    FindDialog(QWidget * parent = 0);

signals: // signaux emis, c'est une macro
    void findNext(const QString& str, Qt::CaseSensitivity cs); //Qt::CaseSensitive est une enumeration pouvant prendre les valeurs Qt::CaseSensitive et Qt::CaseInsensitive
    void findPrevious(const QString& str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString& text);

private:
    QLabel * label;
    QLineEdit * lineEdit;
    QCheckBox * caseCheckBox;
    QCheckBox * backwardCheckBox;
    QPushButton * findButton;
    QPushButton * closeButton;
};

#endif // FINDDIALOG_HPP
