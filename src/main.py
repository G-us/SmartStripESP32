import PySimpleGUI as sg
import serial
import json
import serial.tools.list_ports

f = open('/home/henryp/VSCodeProjects/SmartStrip/src/Commands.json')

commands = json.load(f)


COM_Port = list(serial.tools.list_ports.comports())[0]# may need tweaking to match new arduinos

COM_Port = COM_Port.device

ser = serial.Serial(str(COM_Port), 115200)
print("Connected to: " + ser.portstr)

# Define the maximum number of buttons per row
max_buttons_per_row = 5

# Calculate the number of rows needed
num_rows = (len(commands["commands"]) + max_buttons_per_row - 1) // max_buttons_per_row

# Create a list of lists to hold the buttons
button_list = [[] for _ in range(num_rows)]

# Populate the button list with the button labels
for i, label in enumerate(commands["commands"]):
    row = i // max_buttons_per_row
    button_list[row].append(sg.Button(label, size=(10, 2), key=label))

# Create a layout for the window using a column element
layout = [[sg.Column(button_list, size=(550, 500))]]

# Create the window
window = sg.Window('Button Window', layout)

# Event loop
while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        ser.close()
        break
    for button_label in commands["commands"]:
        if event == button_label:
            print(f'{button_label} was pressed')
            command = button_label + '#'
            ser.write(bytes(command, 'utf-8'))


# Close the window
window.close()