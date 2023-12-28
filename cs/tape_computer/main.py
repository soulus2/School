from tkinter import *
def rect(canvas, posX,posY,sizeX,sizeY,fill="white",outline="black",border=0):
    canvas.create_rectangle(posX,posY,posX+sizeX,posY+sizeY,fill=fill,outline="#000000",width=border)
    
class cell:
    def __init__(self,index,state):
        self.index = index
        self.state = state

    def get_state(self):
        return self.state 
    def state_on(self):
        if self.state!=True:self.state=True
        else: print("You can not turn on cell, it is already on!")
    def state_off(self):
        if self.state!=False:self.state=False
        else: print("You can not turn off cell, it is already off!")
            
class tape:
    cells=[]
    
    def add_cell(self, cell):
        self.cells.append(cell)
    
    def make(self, canvas):
        for c in range(len(self.cells)):
            if self.cells[i].state:
                rect(canvas,50*c,10,50,50,fill="#ff3333",border=1) 
            else :
                rect(canvas,50*c,10,50,50,border=1)

class pointer:
    def __init__(self,index,tape):
        self.index= index
        self.tape = tape
        self.cells = self.tape.cells
    def move_left(self):
        self.index-=1
        if self.index<=0:self.index=0
    def move_right(self):
        self.index+=1
        if self.index>=len(self.cells)-1: self.index=len(cells)-1
    def get_cell(self):
        for i in range(len(self.cells)):
            if i==self.cells[i].index :
                return self.cells[i]
win= Tk()
canvas = Canvas(win)
t= tape()
for i in range(5):
    c= cell(i,False)
    t.add_cell(c)

p= pointer(0,t)
p.move_left()
p.get_cell().state_on()

t.make(canvas)
canvas.pack()
mainloop()
