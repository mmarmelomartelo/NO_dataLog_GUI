import serial #Import Serial Library
import numpy #Import Numpy Library
import matplotlib.pyplot as plt #import matplotlib Library
from drawnow import *

device_readings_array = []
arduinoData = serial.Serial ("/dev/ttyACM0", 115200)
plt.ion()

def makeFigure():
    plt.plot(device_readings_array, 'ro-')


while True: # a While loop that loops forever
    while (arduinoData.inWaiting()==0): #wait here until there is data
        pass #do nothing
    arduinoString = arduinoData.readline() # Read the line of text coming from arduino
    device_readings = float (arduinoString) # covert text data (string) in numbers (float)
    device_readings_array.append(device_readings) # adds the data coming from device (now floats) in our arrays list
    #print (device_readings_array)
    drawnow (makeFigure)
    plt.pause(0.000001)