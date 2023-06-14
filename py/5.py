#/bin/python3

import drawsvg as draw

d = draw.Drawing(200,200, origin='center') # canvas
d.append(draw.Circle(0,0,30)) # render on canvas
d()

