SerialtoSevenSegment
====================

Code for sending number from serial to a arduino, and then to a seven segment display
-------------------------------------------------------------------------------------

How to use:
First you need to wire up the Arduino correctly
![Seven Segment](/img/7segment.gif "Seven Segment")
![Pinout](/img/7segmentdiagram.jpg "Pinout")
![Table](/img/arduinotable.png "Table")

Then you need to send numbers through the serial port, you can do this with the Arduino application by going to:

Tools -> Serial Moniter (command-shift-m)

Then enter a number and press enter, the number should appear on the display.
You can send H to indicate more than 9, and send O to turn off the display

You can do this with code also:	

	#With Python, using the PySerial Library(http://pyserial.sourceforge.net/):

	's = serial.Serial('/dev/tty.<yourusb>', 9600)''
	's.write('1')''
