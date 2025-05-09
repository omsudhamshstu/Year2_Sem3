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

            public void mouseEntered(MouseEvent e) {
                int x = e.getX();
                int y = e.getY();
                int width = getWidth();
                int height = getHeight();

                // Determine which side the mouse entered from
                if (x < 50 && y < height && y > 0) {
                    label.setText("Mouse entered from Left");
                } else if (x > width - 50 && y < height && y > 0) {
                    label.setText("Mouse entered from Right");
                } else if (y < 50 && x < width && x > 0) {
                    label.setText("Mouse entered from Top");
                } else if (y > height - 50 && x < width && x > 0) {
                    label.setText("Mouse entered from Bottom");
                } else {
                    label.setText("Mouse entered");
                }
            }
        });

        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Code14_MouseEvents();
    }
}
// The Code Is Modified to Show Mouse Entered from Which Side