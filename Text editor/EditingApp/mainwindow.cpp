#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered(){
    curFileName="";
    ui->textEdit->setText("");
}
void MainWindow::on_actionExit_triggered(){
    QApplication::quit();
}
void MainWindow::on_actionOpen_triggered(){
    QString fileName =  QFileDialog::getOpenFileName(this,"Open file");
    QFile file(fileName);
    curFileName = fileName;
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}
void MainWindow::on_actionSave_triggered(){
    if(curFileName=="")
    {
        on_actionSave_As_triggered();
        return;
    }
    QFile File(curFileName);
    if(File.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out(&File);
        out << ui->textEdit->toPlainText();
        File.close();
    }
}
void MainWindow::on_actionSave_As_triggered(){
    QString fileName = QFileDialog::getSaveFileName(this, "Save As");
    QFile file(fileName);
    curFileName = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}
void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}
void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}
void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}
void MainWindow::on_actionUndo_triggered(){
     ui->textEdit->undo();
}
void MainWindow::on_actionBold_triggered()
{
     int bolder;
     bolder = ui->textEdit->fontWeight();
     if(bolder==QFont::Normal){
        ui->textEdit->setFontWeight(QFont::Bold);
     }
     else{
         ui->textEdit->setFontWeight(QFont::Normal);
     }

}
void MainWindow::on_actionItalic_triggered(){

     bool italer;
     italer= ui->textEdit->fontItalic();
     ui->textEdit->setFontItalic(!italer);
}
void MainWindow::on_actionUnderline_triggered(){
      bool underliner;
      underliner= ui->textEdit->fontUnderline();
      ui->textEdit->setFontUnderline(!underliner);
}
void MainWindow::on_actionSuperscript_triggered()
{
      QTextCharFormat format;
      format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
      if(ui->textEdit->hasFocus()){
         ui->textEdit->mergeCurrentCharFormat(format);
      }
}
void MainWindow::on_actionSubscript_triggered()
{
      QTextCharFormat format;
      format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
      if(ui->textEdit->hasFocus()){
         ui->textEdit->mergeCurrentCharFormat(format);
      }
}
void MainWindow::on_actionResume_triggered(){
      Resume resume;
      resume.exec();
}
