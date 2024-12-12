# ii). Write a GUI program to create a window wizard having two text labels, two text fields and two buttons
# as Submit and Reset.
import tkinter as tk

def submit_action():
    label_result.config(text=f"Submitted: {entry_name.get()}, {entry_email.get()}")

def reset_action():
    entry_name.delete(0, tk.END)
    entry_email.delete(0, tk.END)
    label_result.config(text="")

root = tk.Tk()
root.title("Window Wizard")

label_name = tk.Label(root, text="Name:")
label_name.grid(row=0, column=0, padx=10, pady=10)
entry_name = tk.Entry(root)
entry_name.grid(row=0, column=1, padx=10, pady=10)

label_email = tk.Label(root, text="Email:")
label_email.grid(row=1, column=0, padx=10, pady=10)
entry_email = tk.Entry(root)
entry_email.grid(row=1, column=1, padx=10, pady=10)

submit_button = tk.Button(root, text="Submit", command=submit_action)
submit_button.grid(row=2, column=0, padx=10, pady=10)

reset_button = tk.Button(root, text="Reset", command=reset_action)
reset_button.grid(row=2, column=1, padx=10, pady=10)

label_result = tk.Label(root, text="")
label_result.grid(row=3, column=0, columnspan=2, padx=10, pady=10)

root.mainloop()