import javax.swing.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.FlowLayout;

public class Code9_SwingComponents {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Swing Example");
        frame.setLayout(new FlowLayout()); // Use FlowLayout for easier component arrangement

        JLabel label = new JLabel("Enter your name:");
        JTextField textField = new JTextField(15); // 15 columns wide
        JTextArea textArea = new JTextArea(5, 20); // 5 rows, 20 columns
        JScrollPane scrollPane = new JScrollPane(textArea); // Add scrollbars to the text area

        JButton button = new JButton("Click Me");

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                button.setText("clicked");
                textArea.append("Button clicked!\n"); // Append text to the text area
            }
        });

        frame.add(label);
        frame.add(textField);
        frame.add(scrollPane); // Add the scroll pane, not just the text area
        frame.add(button);

        frame.setSize(400, 300); // Increased size to accommodate new components
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}

// Output: A window appears with a label, a text field, a text area with scrollbars, and a button.
// When the button is clicked, its text changes to "clicked", and "Button clicked!" is appended to the text area.
// Use cmd/powershell/bash to run the code: javac Code9_SwingComponents.java && java Code9_SwingComponents
