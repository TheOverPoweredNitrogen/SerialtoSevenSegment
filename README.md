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

	s = serial.Serial('/dev/tty.<yourusb>', 9600)
	s.write('1')''


This code is from hacktronicks. 
 LICENSE
 -------

 ### The MIT License (MIT)

Copyright (c) 2013 Aaron Eline

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
