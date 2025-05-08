import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Code10_SimpleCalculator implements ActionListener {
    JFrame frame;
    JTextField textField;
    String num1, operator, num2;

    Code10_SimpleCalculator() {
        num1 = operator = num2 = "";
        frame = new JFrame("Simple Calculator");
        textField = new JTextField();
        textField.setBounds(10, 10, 280, 30);
        frame.add(textField);

        // Added "C" to the buttons array
        String[] buttons = {"7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", ".", "=", "+", "C"};
        int x = 10, y = 50;
        for (String buttonText : buttons) {
            JButton button = new JButton(buttonText);
            button.setBounds(x, y, 60, 40);
            button.addActionListener(this);
            frame.add(button);
            x += 70;
            if (x > 220) {
                x = 10;
                y += 50;
            }
        }

        frame.setSize(320, 350); // Increased height to accommodate the new button
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();
        
        // Add handling for Clear button
        if (command.equals("C")) {
            num1 = operator = num2 = "";
            textField.setText("");
            return;
        }
        
        if ((command.charAt(0) >= '0' && command.charAt(0) <= '9') || command.charAt(0) == '.') {
            if (!operator.equals(""))
                num2 = num2 + command;
            else
                num1 = num1 + command;
            textField.setText(num1 + operator + num2);
        } else if (command.charAt(0) == '=') {
            double result = switch (operator) {
                case "+" -> Double.parseDouble(num1) + Double.parseDouble(num2);
                case "-" -> Double.parseDouble(num1) - Double.parseDouble(num2);
                case "*" -> Double.parseDouble(num1) * Double.parseDouble(num2);
                case "/" -> Double.parseDouble(num1) / Double.parseDouble(num2);
                default -> 0;
            };
            textField.setText(String.valueOf(result));
            num1 = String.valueOf(result);
            operator = num2 = "";
        } else {
            operator = command;
            textField.setText(num1 + operator);
        }
    }

    public static void main(String[] args) {
        new Code10_SimpleCalculator();
    }
}