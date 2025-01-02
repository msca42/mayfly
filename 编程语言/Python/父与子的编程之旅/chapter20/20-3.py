import sys

from PyQt5 import QtWidgets, uic

form_class = uic.loadUiType("tempconv.ui")[0]

class TemperatureConverterWindow(QtWidgets.QMainWindow,form_class):
    def __init__(self, parent=None):
        QtWidgets.QMainWindow.__init__(self, parent)
        self.setupUi(self)
        self.btnCtoF.clicked.connect(self.btnCtoF_clicked)
        self.btnFtoC.clicked.connect(self.btnFtoC_clicked)

    def btnCtoF_clicked(self):
       cel = float(self.editCel.text())
       fahr = cel * 9 / 5.0 + 32
       self.spinFahr.setValue(int(fahr + 0.5))

    def btnFtoC_clicked(self):
        fahr = self.spinFahr.value()
        cel = (fahr - 32) * 5 / 9.0
        self.editCel.setText(str(cel))



app = QtWidgets.QApplication(sys.argv)
myWindow = TemperatureConverterWindow()
myWindow.show()
app.exec_()