import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Code14_MouseEvents extends JFrame {
    JLabel label;

    public Code14_MouseEvents() {
        label = new JLabel("Mouse Event will be shown here", JLabel.CENTER);
        add(label, BorderLayout.CENTER);
        addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                label.setText("Mouse Clicked");
            }
        });
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Code14_MouseEvents();
    }
}
// The Code Will be modified.