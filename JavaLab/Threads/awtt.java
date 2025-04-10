import java.awt.*;
import java.awt.event.*;

class Calculator implements ActionListener {
    int c, n;
    String s1, s2, s3, s4, s5;
    Frame f;
    Button b0, b1, b2, b3, b4, b5, b6, b7, b8, b9;
    Button add, sub, mul, div, mod, equal, clear;
    Panel p;
    TextField tf;
    GridLayout g;

    Calculator() {
        f = new Frame("My Calculator");
        p = new Panel();
        f.setLayout(new FlowLayout());

        // Creating buttons
        b0 = new Button("0"); b0.addActionListener(this);
        b1 = new Button("1"); b1.addActionListener(this);
        b2 = new Button("2"); b2.addActionListener(this);
        b3 = new Button("3"); b3.addActionListener(this);
        b4 = new Button("4"); b4.addActionListener(this);
        b5 = new Button("5"); b5.addActionListener(this);
        b6 = new Button("6"); b6.addActionListener(this);
        b7 = new Button("7"); b7.addActionListener(this);
        b8 = new Button("8"); b8.addActionListener(this);
        b9 = new Button("9"); b9.addActionListener(this);

        add = new Button("+"); add.addActionListener(this);
        sub = new Button("-"); sub.addActionListener(this);
        mul = new Button("*"); mul.addActionListener(this);
        div = new Button("/"); div.addActionListener(this);
        mod = new Button("%"); mod.addActionListener(this);
        equal = new Button("="); equal.addActionListener(this);
        clear = new Button("C"); clear.addActionListener(this);

        // Text field
        tf = new TextField(20);
        f.add(tf);

        // Grid layout for panel
        g = new GridLayout(4, 4, 10, 20);
        p.setLayout(g);

        // Adding buttons to panel
        p.add(b1); p.add(b2); p.add(b3); p.add(add);
        p.add(b4); p.add(b5); p.add(b6); p.add(sub);
        p.add(b7); p.add(b8); p.add(b9); p.add(mul);
        p.add(b0); p.add(mod); p.add(equal); p.add(div);

        f.add(p);
        f.add(clear); // Add clear button below panel
        f.setSize(300, 350);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        Object source = e.getSource();

        // Digits
        if (source == b0 || source == b1 || source == b2 || source == b3 ||
            source == b4 || source == b5 || source == b6 || source == b7 ||
            source == b8 || source == b9) {

            String digit = ((Button) source).getLabel();
            tf.setText(tf.getText() + digit);
        }

        // Operations
        if (source == add) { s1 = tf.getText(); tf.setText(""); c = 1; }
        if (source == sub) { s1 = tf.getText(); tf.setText(""); c = 2; }
        if (source == mul) { s1 = tf.getText(); tf.setText(""); c = 3; }
        if (source == div) { s1 = tf.getText(); tf.setText(""); c = 4; }
        if (source == mod) { s1 = tf.getText(); tf.setText(""); c = 5; }

        // Equal
        if (source == equal) {
            s2 = tf.getText();
            try {
                int a = Integer.parseInt(s1);
                int b = Integer.parseInt(s2);

                switch (c) {
                    case 1: n = a + b; break;
                    case 2: n = a - b; break;
                    case 3: n = a * b; break;
                    case 4:
                        if (b != 0) n = a / b;
                        else {
                            tf.setText("infinite");
                            return;
                        }
                        break;
                    case 5: n = a % b; break;
                }
                tf.setText(String.valueOf(n));
            } catch (Exception ex) {
                tf.setText("Error");
            }
        }

        // Clear
        if (source == clear) {
            tf.setText("");
            s1 = s2 = "";
            c = 0;
        }
    }

    public static void main(String[] args) {
        new Calculator();
    }
}