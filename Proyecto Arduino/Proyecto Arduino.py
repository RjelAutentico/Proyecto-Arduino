#Aqui se estan importando las librerias necesarias
import numpy as np
import cv2
from tkinter import *
import tkinter as tk
from tkinter import filedialog
from PIL import Image
from PIL import ImageTk
import imutils
from tkinter.filedialog import askopenfilename
import tkinter.simpledialog
from tkinter import messagebox
import serial
import time
from tkinter import ttk
import sys
import subprocess
import threading 


cont0 = 0
cont1 = 0
cont2 = 0


#--------------------------------------------------------------------------------------------------------#
dato1 = ""
cad2 = ""
#archivo = open('C:\\Users\\Asus\\Desktop\\Proyecto Arduino\\Assets\\datos.txt','w')
#archivo = open('C:\\Users\\Lab CIM\\Desktop\\Proyecto Arduino\\Assets\\datos.txt','w')

i = 0

serialArduino = serial.Serial("COM4",9600)
#--------------------------------------------------------------------------------------------------------#


def visualizar0():
	global cont0

	cont0 = cont0+1


	if cap0 is not None:

		ret, frame = cap0.read()
		
		if ret == True:


			frame0 = imutils.resize(frame, width=350)
			frame0 = cv2.resize(frame0, (400,300))
			frame0 = cv2.cvtColor(frame0, cv2.COLOR_BGR2RGB)


			im0 = Image.fromarray(frame0)
			img0 = ImageTk.PhotoImage(image=im0)

			#imG = Image.fromarray(gris)
			#imgG = ImageTk.PhotoImage(image=imG)

	#		imB = Image.fromarray(mascara)
	#		imgB = ImageTk.PhotoImage(image=imB)


			lblVideoCam0.configure(image=img0)
			lblVideoCam0.image = img0 
			lblVideoCam0.after(10, visualizar0)

	#		lblVideoGris.configure(image=imgG)
	#		lblVideoGris.image = imgG 
	#		lblVideoGris.after(50, visualizarGris)

	#		lblVideoBin.configure(image=imgB)
	#		lblVideoBin.imageB = imgB 
	#		lblVideoBin.after(10, visualizar)
				

				

		else:
			lblVideoCam0.image = ""
	#		capgris.release()



def visualizar1():
	global cont1

	cont1 = cont1+1

	if cap1 is not None:

		ret1, frame1 = cap1.read()
		
		if ret1 == True:

			frame1 = imutils.resize(frame1, width=350)
			frame1 = cv2.resize(frame1, (400,300))
			frame1 = cv2.cvtColor(frame1, cv2.COLOR_BGR2RGB)


			im1 = Image.fromarray(frame1)
			img1 = ImageTk.PhotoImage(image=im1)

			#imG = Image.fromarray(gris)
			#imgG = ImageTk.PhotoImage(image=imG)

	#		imB = Image.fromarray(mascara)
	#		imgB = ImageTk.PhotoImage(image=imB)


			lblVideoCam1.configure(image=img1)
			lblVideoCam1.image = img1 
			lblVideoCam1.after(50, visualizar1)

	#		lblVideoGris.configure(image=imgG)
	#		lblVideoGris.image = imgG 
	#		lblVideoGris.after(50, visualizarGris)

	#		lblVideoBin.configure(image=imgB)
	#		lblVideoBin.imageB = imgB 
	#		lblVideoBin.after(10, visualizar)
				

				

		else:
			lblVideoCam0.image = ""
	#		capgris.release()


def envNum():

	try:
		numeroEst = int(numEstacion.get())
		if numeroEst == 1 or numeroEst == 2 or numeroEst == 3 or numeroEst == 4 or numeroEst == 5 or numeroEst == 6:
			numeroEst = str(numeroEst)
			#print(numeroEst)
			dato1 = 'LIBERARE' + numeroEst
			serialArduino.write(dato1.encode('ascii'))
			#serialArduino.write(dato1)


		else:
			messagebox.showerror("Ingrese un número valido","Las estaciones son de 1 a 6")

	except ValueError:
		messagebox.showerror("Ingrese un número valido","Las estaciones son de 1 a 6")



def envPalEst():
	try:	
		numeroPal = NumeroPalet.get()
		paletEstacion = int(palEst.get())
		if numeroPal == "1" or numeroPal == "2" or numeroPal == "3" or numeroPal == "5" or numeroPal == "6":
			if numeroPal == "1":
				numeroPal = "UNO"
			if numeroPal == "2":
				numeroPal = "DOS"
			if numeroPal == "3":
				numeroPal = "TRES"
			if numeroPal == "5":
				numeroPal = "CINCO"
			if numeroPal == "6":
				numeroPal = "SEIS"

			if paletEstacion == 1 or paletEstacion == 2 or paletEstacion == 3 or paletEstacion == 4 or paletEstacion == 5 or paletEstacion == 6:
				paletEstacion = str(paletEstacion)
				#print(numeroPal)
				#print(paletEstacion)
				dato1 = numeroPal + 'E' + paletEstacion
				serialArduino.write(dato1.encode('ascii'))
				#serialArduino.write(dato1)



			else:
				messagebox.showerror("Ingrese valores validos.","Los palet son del 1 al 6, sin 4. Y las estaciones son de 1 a 6")
		
		else:
			messagebox.showerror("Ingrese valores validos.","Los palet son del 1 al 6, sin 4. Y las estaciones son de 1 a 6")

	
	except ValueError:
		messagebox.showerror("Ingrese valores validos.","Los palet son del 1 al 6, sin 4. Y las estaciones son de 1 a 6")


def libAll():
	dato1 = 'LIBERARTODO'
	#print(dato1)
	serialArduino.write(dato1.encode('ascii'))
	#serialArduino.write(dato1)


#--------------------------------------------------------------------------------------------------------#


def comprobar0():
	if cont0 == 0:
		visualizar0()
	else:
		return


def comprobar1():
	if cont1 == 0:
		visualizar1()
	else:
		return


#--------------------------------------------------------------------------------------------------------#


root = Tk()
root.state('zoomed')
root.title('Interfaz Arduino')
root.iconbitmap('C:\\Users\\Lab CIM\\Desktop\\Proyecto Arduino\\Assets\\Logo_Arduino.ico')
#root.iconbitmap('C:\\Users\\Asus\\Desktop\\Proyecto Arduino\\Assets\\Logo_Arduino.ico')
root.geometry("1400x800")



lblTitulo = Label(root, text = "Interfaz Grafica", bg='#134A8D', fg = "white", font = ("Arial", 25))
lblTitulo.place(x = 570, y = 20)

cap0 = cv2.VideoCapture(2)
cap1 = cv2.VideoCapture(1)


lblVideoCam0 = Label(root)
lblVideoCam0.place(x = 900, y = 20)

#lblVideoCam0.grid(column=1, row=1, padx=(700,1), pady=(80,1))


lblVideoCam1 = Label(root)
lblVideoCam1.place(x = 900, y = 330)

#lblVideoCam1.grid(column=2, row=1, padx=(10,1), pady=(80,1))




btnIniciar0 = Button(root, text="Iniciar Camara 1", width=20, height=3, bg='#5499C7', activebackground='#2980B9', command=comprobar0)
btnIniciar0.place(x = 730, y = 300)
#btnIniciar0.grid(column=1, row=2, padx=(755,1), pady=(350,1), ipady=(30))



btnIniciar1 = Button(root, text="Iniciar Camara 2", width=20, height=3, bg='#5499C7', activebackground='#2980B9', command=comprobar1)
btnIniciar1.place(x = 730, y = 370)
#btnIniciar1.grid(column=1, row=3, padx=(100,1), pady=(350,1), ipady=(30))


lblLogo = Label(root)

lblLogo.place(x = 550, y = 100)

#lblLogo.grid(column=3, row = 3, padx=(1,1), pady=(12,1))

logo = cv2.imread('C:\\Users\\Lab CIM\\Desktop\\Proyecto Arduino\\Assets\\LogoUbb.png')
#logo = cv2.imread('C:\\Users\\Asus\\Desktop\\Proyecto Arduino\\Assets\\LogoUbb.png')

logo = cv2.resize(logo, (100,150))
logo = cv2.cvtColor(logo, cv2.COLOR_BGR2RGB)

log = Image.fromarray(logo)
log0 = ImageTk.PhotoImage(image=log) 

lblLogo.configure(image=log0)
lblLogo.image = log0 


estacion = Label(root, text = "Respuesta Arduino: ", bg='#B8ABAB', fg = "white", font = ("Arial", 20))
estacion.place(x = 40, y = 10)


estacion = Label(root, text = "Liberar estación ", bg='#B8ABAB', fg = "white", font = ("Arial", 20))
estacion.place(x = 40, y = 500)

numEstacion = Entry(root, width=2, highlightthickness=1, font = ("Arial", 20))
numEstacion.config(highlightbackground = "#B8ABAB", highlightcolor= "#B8ABAB")
numEstacion.place(x = 280, y = 500)

btnNumEstacion = Button(root, text = "ENVIAR", command = envNum)
btnNumEstacion.place(x = 340, y = 505)


#------------------------------------------------------------------------------------------------------------------#
EnviarPalet = Label(root, text = "Comprobar si el Palet ", bg='#B8ABAB', fg = "white", font = ("Arial", 20))
EnviarPalet.place(x = 40, y = 550)

NumeroPalet = Entry(root, width=2, highlightthickness=1, font = ("Arial", 20))
NumeroPalet.config(highlightbackground = "#B8ABAB", highlightcolor= "#B8ABAB")
NumeroPalet.place(x = 354, y = 550)

aEstacion = Label(root, text = " Esta el la Estación ", bg='#B8ABAB', fg = "white", font = ("Arial", 20))
aEstacion.place(x = 390, y = 550)

palEst = Entry(root, width=2, highlightthickness=1, font = ("Arial", 20))
palEst.config(highlightbackground = "#B8ABAB", highlightcolor= "#B8ABAB")
palEst.place(x = 669, y = 550)

btnPalEst = Button(root, text = "ENVIAR", command = envPalEst)
btnPalEst.place(x = 730, y = 555)
#------------------------------------------------------------------------------------------------------------------#

btnLibAll = Button(root, text = "Liberar todas las estaciones",  width=30, height=2, activebackground='#7D7D7D', font = ("Arial", 15), command = libAll)
btnLibAll.place(x = 40, y = 600)


#------------------------------------------------------------------------------------------------------------------#

def datosArduino2(cadDos):
	global cad2
	cad2 = cadDos
	datosArd2.configure(text = cad2, fg = "black", font = ("Arial", 10))


def datosArduino1():
	global cont2

	cont2 = cont2 + 1
	#time.sleep(60)
	cad = serialArduino.readline().decode('ascii')
	print(cad)
	if cad == cad2:
		datosArduino2(cad)
	else:
		#return
		datosArd.configure(text = cad, fg = "black", font = ("Arial", 10))
	datosArd.after(250, datosArduino1)
	#archivo.write(cad)



def comprobar2():
	if cont2 == 0:
		datosArduino1()
	else:
		return

#leer = archivo.read()



btnDatosArd = Button(root, text = "Activar respuestas de Arduino", command = comprobar2)
btnDatosArd.place(x = 305, y = 420)


datosArd = Label(root)
datosArd.place(x = 40, y = 110)

datosArd2 = Label(root)
datosArd2.place(x = 40, y = 60)


lblcredito = Label(root, text = "Interfaz Grafica creada por Rodrigo Jara Riveros", bg='#BFBFBF', fg = "black", font = ("Arial", 15))
lblcredito.place(x=450, y=600)

lblYo = Label(root, text = "Estudiante de ICINF, UBB", bg='#BFBFBF', fg = "black", font = ("Arial", 15))
lblYo.place(x=450, y=629)



#------------------------------------------------------------------------------------------------------------------#


class Redirect():

    def __init__(self, widget, autoscroll=True):
        self.widget = widget
        self.autoscroll = autoscroll

    def write(self, textTer):
        self.widget.insert('end', textTer)
        if self.autoscroll:
            self.widget.see("end")  # autoscroll



frameTer = tk.Frame(root)
frameTer.place(x=40, y =50)

textTer = tk.Text(frameTer, width = 30, height=25)
textTer.pack(side='left', fill='both', expand=True)

scrollbar = tk.Scrollbar(frameTer)
scrollbar.pack(side='right', fill='y')

textTer['yscrollcommand'] = scrollbar.set
scrollbar['command'] = textTer.yview

old_stdout = sys.stdout    
sys.stdout = Redirect(textTer)




root.mainloop()






"""

#---Asi por ejemplo

camara = None
gris = None
binario = None
cap = None
tipoCamara = None

#Esto de aqui, es una funcion para que no de error cuando no se este registrando ningun valor
def nada(x):
	pass

#-------------------------------------------------Imagen con Valores HSV-------------------------------------------------#

#evento,x,y,flags,params

def mouse(r):
	global e, x0, y0

	x0 = r.x
	y0 = r.y
	#print(x0,y0)

	e = hsv[x0,y0]

	valor_hue = e[0]
	valor_sat = e[1]
	valor_val = e[2]

	valor_hue = str(valor_hue)
	valor_sat = str(valor_sat)
	valor_val = str(valor_val)

	Valores = np.zeros((130,300,3), np.uint8)

	font = cv2.FONT_HERSHEY_SIMPLEX
	pos_hue = (10,50)
	pos_val_hue = (10,80)
	pos_sat = (100,50)
	pos_val_sat = (100,80)
	pos_val = (230,50)
	pos_val_val = (230,80)
	fontScale = 2/3
	fontColor = (255,255,255)
	thickness = 1
	lineType = 2

	cv2.putText(Valores,'Hue', pos_hue, font, fontScale, fontColor, thickness, lineType)
	cv2.putText(Valores,valor_hue, pos_val_hue, font, fontScale, fontColor, thickness, lineType)
	cv2.putText(Valores,'Saturation', pos_sat, font, fontScale, fontColor, thickness, lineType)
	cv2.putText(Valores,valor_sat, pos_val_sat, font, fontScale, fontColor, thickness, lineType)
	cv2.putText(Valores,'Value', pos_val, font, fontScale, fontColor, thickness, lineType)
	cv2.putText(Valores,valor_val, pos_val_val, font, fontScale, fontColor, thickness, lineType)

	cv2.namedWindow('Valores', cv2.WINDOW_AUTOSIZE)

	cv2.imshow("Valores",Valores)


#-------------------------------------------------Tabla Sliders HSV-------------------------------------------------#

#Aqui se esta creando la tabla para manipular los parametros HSV
cv2.namedWindow('Parametros_H,S,V')
cv2.createTrackbar('Hue Min','Parametros_H,S,V',0,179,nada) 
cv2.createTrackbar('Hue Max','Parametros_H,S,V',0,179,nada) #Estos son para la Matiz
cv2.createTrackbar('Saturation Min','Parametros_H,S,V',0,255,nada)
cv2.createTrackbar('Saturation Max','Parametros_H,S,V',0,255,nada) #Estos son para la Saturacion
cv2.createTrackbar('Bright Min','Parametros_H,S,V',0,255,nada)
cv2.createTrackbar('Bright Max','Parametros_H,S,V',0,255,nada) #Estos para el Brillo
cv2.createTrackbar('Kernel X','Parametros_H,S,V',1,30,nada)
cv2.createTrackbar('Kernel Y','Parametros_H,S,V',1,30,nada) #Y esto es un filtro

#Esta parte es para escoger la camara que se va a usar, siendo 0 la camara predeterminada


#-------------------------------------------------Impedimento de cerrar las ventanas-------------------------------------------------#

def camaraNO():
	return

def grisNO():
	return

def binarioNO():
	return

def seleccionNO():
	return

#-------------------------------------------------Imagenes de la Camara-------------------------------------------------#


def visualizar():
	global hsv, x, y

	if cap is not None:
		ret, frame = cap.read()
		if ret == True:
			frame = imutils.resize(frame, width=350)
			frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
			frame = cv2.resize(frame, (300,300))
#			frame = cv2.flip(frame, 1)


			hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)
	
			im = Image.fromarray(frame)
			img = ImageTk.PhotoImage(image=im)
			#img = img.resize((500,500), Image.ANTIALIAS)

#			imG = Image.fromarray(gris)
#			imgG = ImageTk.PhotoImage(image=imG)

#			imB = Image.fromarray(mascara)
#			imgB = ImageTk.PhotoImage(image=imB)


			lblVideoCam.configure(image=img)
			lblVideoCam.image = img 
			lblVideoCam.after(10, visualizar)

#			x = x_camara
#			y = y_camara

			lblVideoCam.bind('<Button-1>', mouse)



#			lblVideoGris.configure(image=imgG)
#			lblVideoGris.imageG = imgG 
#			lblVideoGris.after(10, visualizar)

#			lblVideoBin.configure(image=imgB)
#			lblVideoBin.imageB = imgB 
#			lblVideoBin.after(10, visualizar)

			

		else:
			lblVideoCam.image = ""
#			cap.release()


def visualizarGris():
#	global capgris, gris


	if capgris is not None:
		ret, frame = capgris.read()
		if ret == True:
			frame = imutils.resize(frame, width=350)
			frame = cv2.resize(frame, (300,300))
			gris = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
	
			#im = Image.fromarray(frame)
			#img = ImageTk.PhotoImage(image=im)

			imG = Image.fromarray(gris)
			imgG = ImageTk.PhotoImage(image=imG)

#			imB = Image.fromarray(mascara)
#			imgB = ImageTk.PhotoImage(image=imB)


#			lblVideoGris.configure(image=img)
#			lblVideoGris.image = img 
#			lblVideoGris.after(10, visualizar)

			lblVideoGris.configure(image=imgG)
			lblVideoGris.image = imgG 
			lblVideoGris.after(50, visualizarGris)

#			lblVideoBin.configure(image=imgB)
#			lblVideoBin.imageB = imgB 
#			lblVideoBin.after(10, visualizar)
			

			

		else:
			lblVideoGris.image = ""
#			capgris.release()



def visualizarBin():
#	global frame

	if capbin is not None:
		ret, frame = capbin.read()
		if ret == True:
			frame = imutils.resize(frame, width=350)
			frame = cv2.resize(frame, (300,300))
			mask = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

			Tmin = cv2.getTrackbarPos('Hue Min', 'Parametros_H,S,V')
			Tmax = cv2.getTrackbarPos('Hue Max', 'Parametros_H,S,V')
			Pmin = cv2.getTrackbarPos('Saturation Min', 'Parametros_H,S,V')
			Pmax = cv2.getTrackbarPos('Saturation Max', 'Parametros_H,S,V')
			Lmin = cv2.getTrackbarPos('Bright Min', 'Parametros_H,S,V')
			Lmax = cv2.getTrackbarPos('Bright Max', 'Parametros_H,S,V')

			#Aqui se establecen los rangos minimo y maximo en arrays
			color_oscuro = np.array([Tmin, Pmin, Lmin])
			color_brilla = np.array([Tmax, Pmax, Lmax])

			#Por aqui se detectan los pixeles que esten dentro de los rangos y se determina que queda en blanco y el resto en negro
			mascara = cv2.inRange(mask, color_oscuro, color_brilla)

			#Aqui se leen los datos Kernel de la tabla, los cuales se usaran para hacer el filtro
			kernelx = cv2.getTrackbarPos('Kernel X', 'Parametros_H,S,V')
			kernely = cv2.getTrackbarPos('Kernel Y', 'Parametros_H,S,V')

			#El Kernel se crea para eliminar el ruido
			kernel = np.ones((kernelx, kernely), np.uint8) #Una matriz para crear las dimensiones del filtro
			mascara = cv2.morphologyEx(mascara, cv2.MORPH_CLOSE, kernel)
			mascara = cv2.morphologyEx(mascara, cv2.MORPH_OPEN, kernel)

		
#			contornos, _ = cv2.findContours(mascara, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE) #Encontramos los contornos
#			cv2.drawContours(frame, contornos, -1, (0,0,0),2) #Con esto los dibuja



#			im = Image.fromarray(frame)
#			img = ImageTk.PhotoImage(image=im)
			#img = img.resize((500,500), Image.ANTIALIAS)

#			imG = Image.fromarray(gris)
#			imgG = ImageTk.PhotoImage(image=imG)

			imB = Image.fromarray(mascara)
			imgB = ImageTk.PhotoImage(image=imB)


#			lblVideoCam.configure(image=img)
#			lblVideoCam.image = img 
#			lblVideoCam.after(10, visualizar)

#			x = x_camara
#			y = y_camara

#			lblVideoCam.bind('<Button-1>', mouse)

#			lblVideoGris.configure(image=imgG)
#			lblVideoGris.imageG = imgG 
#			lblVideoGris.after(10, visualizar)

			lblVideoBin.configure(image=imgB)
			lblVideoBin.image = imgB 
			lblVideoBin.after(100, visualizarBin)

			

		else:
			lblVideoBin.image = ""
#			cap.release()



#-------------------------------------------------Creando la ventana-------------------------------------------------#


def ver():
	global lblVideoCam, camara

	camara = Toplevel()
	camara.title('Camara')
	camara.protocol("WM_DELETE_WINDOW", camaraNO)
	camara.resizable(False, False)
	camara.iconbitmap('C:\\Users\\Lab CIM\\Desktop\\VsRj\\Assets\\Circulo_cromatico.ico')



#	cv2.setMouseCallback("Camara", mouse)

	lblVideoCam = Label(camara)
	lblVideoCam.grid(column=0, row=1, columnspan=2)
	visualizar()


def verGris():
	global lblVideoGris, gris
	gris = Toplevel()
	gris.title('Gris')
	gris.protocol("WM_DELETE_WINDOW", grisNO)
	gris.resizable(False, False)
	gris.iconbitmap('C:\\Users\\Lab CIM\\Desktop\\VsRj\\Assets\\Circulo_Acromatico.ico')


	lblVideoGris = Label(gris)
	lblVideoGris.grid(column=0, row=1, columnspan=2)
	visualizarGris()


def verBin():
	global lblVideoBin, binario
	binario = Toplevel()
	binario.title('Binario')
	binario.protocol("WM_DELETE_WINDOW", binarioNO)
	binario.resizable(False, False)
	binario.iconbitmap('C:\\Users\\Lab CIM\\Desktop\\VsRj\\Assets\\Circulo_Binario.ico')

	lblVideoBin = Label(binario)
	lblVideoBin.grid(column=0, row=1, columnspan=2)
	visualizarBin()

#-------------------------------------------------Seleccionar camara-------------------------------------------------#

def cam0():
	tipoCamara.destroy()
	iniciar_Vid(0)


def cam1():
	tipoCamara.destroy()
	iniciar_Vid(1)

	

def numCamara():
	global tipoCamara

	if tipoCamara:
		tipoCamara.destroy()

	tipoCamara = Toplevel()
	tipoCamara.title('Seleccione Camara')
	tipoCamara.protocol("WM_DELETE_WINDOW", seleccionNO)
	tipoCamara.resizable(False,False)
	tipoCamara.iconbitmap('C:\\Users\\Lab CIM\\Desktop\\VsRj\\Assets\\Camarita.ico')


	btnEscogerCam0 = Button(tipoCamara, text="Camara del PC", width=20, command=cam0)
	btnEscogerCam0.grid(column=5, row=0, padx=(1,1), pady=5)
	
	btnEscogerCam1 = Button(tipoCamara, text="Camara USB", width=20, command=cam1)
	btnEscogerCam1.grid(column=6, row=0, padx=(1,1), pady=5)






#-------------------------------------------------Botones-------------------------------------------------#


def iniciar():
	global cap, camara

	if cap:

		if camara:
			camara.destroy()

#	cap = cv2.VideoCapture(0)

		ver()

	else:
		messagebox.showinfo("","Encienda la camara primero")



def finalizar():
	global cap
	camara.destroy()
	cv2.destroyWindow("Valores")
	cap = None
#	cap.release()


def iniciar_gris():
	global capgris, gris

	if cap:

		if gris:
			gris.destroy()

#	capgris = cv2.VideoCapture(0)

		capgris = cap
		verGris()

	else:
		messagebox.showinfo("","Encienda la camara primero")



def finalizar_gris():
	global capgris
	gris.destroy()
#	capgris.release()


def iniciar_Bin():
	global capbin, binario 
	
	if cap:

		if binario:
			binario.destroy()

#	capbin = cv2.VideoCapture(0)

		capbin = cap
		verBin()

	else:
		messagebox.showinfo("","Encienda la camara primero")


def finalizar_Bin():
	global capbin
	binario.destroy()
#	cv2.destroyWindow("Parametros_HSV")
#	capbin.release()


def iniciar_Vid(c):
	global cap
	cam = c
	cap = cv2.VideoCapture(cam)

#	pass

def finalizar_Vid():
#	cap = None
	cap.release()
#	pass


#-------------------------------------------------Ventana Raiz-------------------------------------------------#

root = Tk()

root.state('zoomed')
root.title('Hola')
root.iconbitmap('C:\\Users\\Lab CIM\\Desktop\\VsRj\\Assets\\Saludo.ico')

btnIniciar = Button(root, text="Iniciar Video", width=20, command=iniciar)
btnIniciar.grid(column=1, row=0, padx=(205,1), pady=5)

btnFinalizar = Button(root, text="Finalizar Video", width=20, command=finalizar)
btnFinalizar.grid(column=2, row=0, padx=(1,0), pady=5)



btnIniciarGris = Button(root, text="Iniciar Gris", width=20, command=iniciar_gris)
btnIniciarGris.grid(column=3, row=0, padx=(25,1), pady=5)

btnFinalizarGris = Button(root, text="Finalizar Gris", width=20, command=finalizar_gris)
btnFinalizarGris.grid(column=4, row=0, padx=(1,0), pady=5)



btnIniciarBin = Button(root, text="Iniciar Binario", width=20, command=iniciar_Bin)
btnIniciarBin.grid(column=5, row=0, padx=(25,1), pady=5)

btnFinalizarBin = Button(root, text="Finalizar Binario", width=20, command=finalizar_Bin)
btnFinalizarBin.grid(column=6, row=0, padx=(1,205), pady=5)



btnIniciarVid = Button(root, text="Encender Camara", bg='#2DDE1D', activebackground='#368C2e', width=20, command=numCamara)
btnIniciarVid.grid(column=3, row=6, padx=(25,1), pady=(140,1), ipady=(30))

btnFinalizarVid = Button(root, text="Apagar Camara", bg='red', activebackground='#911C1C', width=20, command=finalizar_Vid)
btnFinalizarVid.grid(column=4, row=6, padx=(1,0), pady=(140,1), ipady=(30))




#lblVideoBin = Label(root)
#lblVideoBin.grid(column=4, row=1, columnspan=2)

root.mainloop()

#while(1):
#	ret, frame = cap.read()
#
#	if ret:
#
#		#Aqui redimensionamos el tamaño de la imagen de la camara para que puedan mostrarse las 3 imagenes
#		frame = cv2.resize(frame, (350,350))
#
#		#Aqui, pasmos los colores de la camara a formato HSV
#		hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)
#
#		#Y en esta a gris
#		gris = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
#
#
#		#Es esta parte, estamos leyendo los datos puestos manualmente en la tabla de parametros 
#		Tmin = cv2.getTrackbarPos('Hue Min', 'Parametros_HSV')
#		Tmax = cv2.getTrackbarPos('Hue Max', 'Parametros_HSV')
#		Pmin = cv2.getTrackbarPos('Saturation Min', 'Parametros_HSV')
#		Pmax = cv2.getTrackbarPos('Saturation Max', 'Parametros_HSV')
#		Lmin = cv2.getTrackbarPos('Bright Min', 'Parametros_HSV')
#		Lmax = cv2.getTrackbarPos('Bright Max', 'Parametros_HSV')
#
#		#Aqui se establecen los rangos minimo y maximo en arrays
#		color_oscuro = np.array([Tmin, Pmin, Lmin])
#		color_brilla = np.array([Tmax, Pmax, Lmax])
#
#		#Por aqui se detectan los pixeles que esten dentro de los rangos y se determina que queda en blanco y el resto en negro
#		mascara = cv2.inRange(hsv, color_oscuro, color_brilla)
#
#		#Aqui se leen los datos Kernel de la tabla, los cuales se usaran para hacer el filtro
#		kernelx = cv2.getTrackbarPos('Kernel X', 'Parametros_HSV')
#		kernely = cv2.getTrackbarPos('Kernel Y', 'Parametros_HSV')
#
#		#El Kernel se crea para eliminar el ruido
#		kernel = np.ones((kernelx, kernely), np.uint8) #Una matriz para crear las dimensiones del filtro
#		mascara = cv2.morphologyEx(mascara, cv2.MORPH_CLOSE, kernel)
#		mascara = cv2.morphologyEx(mascara, cv2.MORPH_OPEN, kernel)
#
#		
#		contornos, _ = cv2.findContours(mascara, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE) #Encontramos los contornos
#		cv2.drawContours(frame, contornos, -1, (0,0,0),2) #Con esto los dibuja
#
#		#Esto es lo que hace que se muestren las 3 imagenes (La normal, la binaria y la gris)
#		cv2.imshow("Camara", frame)
#		cv2.imshow("Binario", mascara)
#		cv2.imshow("Gris", gris)
#
#		cv2.setMouseCallback("Camara", mouse)
#
#
#		#Y por ultimo, esto es para poder cerrar todo con la tecla Esc.
#		k = cv2.waitKey(5)
#		if k == 27:
#			cv2.destroyAllWindows()
#
#cap.release()

		"""



