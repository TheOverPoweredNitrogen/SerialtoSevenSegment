SerialtoSevenSegment
====================

Code for sending number from serial to a arduino, and then to a seven segment display
-------------------------------------------------------------------------------------

For example:

	#With Python, using the PySerial Library(http://pyserial.sourceforge.net/):

	's = serial.Serial('/dev/tty.<yourusb>', 9600)''
	's.write('1')''
