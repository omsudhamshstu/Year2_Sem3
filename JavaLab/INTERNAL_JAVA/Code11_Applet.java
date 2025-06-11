import java.applet.Applet;
import java.awt.Graphics;

public class Code11_Applet extends Applet {
    public void paint(Graphics g) {
        g.drawString("Hello, Applet!", 50, 25);
    }
}
// This code wont be executed in the JDK 21.0 and later versions.
// To run this code, you need to use the appletviewer tool or an older version of Java.

<html>
  <head>
    <title>Hello Applet</title>
  </head>
  <body>
    <applet code="Code11_Applet.class" width="300" height="100">
    </applet>
  </body>
</html>
