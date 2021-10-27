import tkinter as tk
import random
import threading
import time
def dow():
    window = tk.Tk()
    width = window.winfo_screenwidth()
    heigth = window.winfo_screenheight()
    a = random.randrange(0,width)
    b = random.randrange(0,heigth)
    window.title("hello")
    window.geometry("250x50" + "+" + str(a) + "+" + str(b))
    tk.Label(window,
             text = "your computer is being hacked!!!",
             bg = "red",
             font = ( "OCR", 10),
             width = 42, height = 2
             ).pack()
    window.mainloop()

threads = []
for i in range(100):
    t = threading.Thread(target = dow)
    threads.append(t)
    time.sleep(0.001)
    threads[i].start()
