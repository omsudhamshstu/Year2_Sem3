import javax.swing.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Swing Example");
        JButton button = new JButton("Click Me");
        
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                button.setText("clicked");
            }
        });

        frame.add(button);
        frame.setSize(300, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}

// Output: A window with a button labeled "Click Me" appears. When clicked, it does nothing.
// Use cmd/powershell/bash to run the code: javac Code9_SwingComponents.java && java Code9_SwingComponents